# 🎤 Final Presentation Script

Now I’m going to talk about the **manual control**, the **autonomous mode**, and the **main limitations** of our system.

---

## 🔹 Manual Control

First, for the manual control, we have two methods:  
**gesture control** and **keyboard control**.

### Gesture Control

For gesture control, I used the MediaPipe library to detect the user’s hand pose from the camera.

At the beginning, I wanted the robot to follow the hand movement directly.  
When I move my hand, the robot arm should follow it in real time.

But in practice, this didn’t really work.

The main issue is that the **camera coordinate system** and the **robot coordinate system** don’t match very well.

So instead, I changed the approach to:

👉 **adjust the target position step by step**

So basically:

- moving the hand **up and down** adjusts the **X value**
- moving **left and right** adjusts the **Y**
- and the **distance to the camera** controls the **Z**

Although this method is less direct, it is much more **controllable in real-world environments**.

---

### Keyboard Control

Keyboard control follows exactly the same idea,  
but instead of gestures, we directly change the **x, y, z values** with a fixed step size.

So keyboard control is actually more **accurate**,  
especially when we need fine adjustments.

From a robotics perspective, what we’re really doing here is:

👉 controlling the **end-effector position in task space**,  
and the robot handles the rest internally.

---

## 🔹 Autonomous Mode

In this mode, the robot performs the whole task automatically.

- First, the robot moves to a **predefined picking position**
- Then the camera captures the image
- We use a **YOLO model** to detect and classify the fruit

Once the detection is successful,  
the robot picks up the fruit and places it into the correct location.

---

## 🔹 Main Limitation

Now I’ll talk about the main limitation of our system.

The biggest problem is something called:

👉 **vision–grasp misalignment**

Basically:

- the camera can detect objects in its view  
- but the robot can only grasp objects in a very specific area in front of the gripper  

So even if the object is detected successfully,  
it doesn’t mean the robot can actually grab it.

---

## 🔹 Current Solution

To deal with this problem, we implemented a simple workaround.

- When the system detects an object  
- it prints a success message  
- and then waits for about **2 seconds**

During this time, we manually place the fruit into the **centre of the gripper**.

This guarantees that the robot can successfully grasp the object.

---

## 🔹 Future Improvement

For future work, we want to solve this properly.

The idea is to:

👉 **calibrate the real grasping region in the camera view**

Then:

- calculate the **position error** between detection and grasping region  
- let the robot **automatically adjust its position before picking**

So the robot can fix the alignment by itself,  
and the system can become fully autonomous.
