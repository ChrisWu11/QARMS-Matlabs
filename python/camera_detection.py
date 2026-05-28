import cv2
from ultralytics import YOLO
from pathlib import Path


model_path = Path(__file__).resolve().parents[1] / "models" / "fruit_yolo_best.pt"
model = YOLO(str(model_path))
cap = cv2.VideoCapture(0)

if not cap.isOpened():
    print("Unable to open camera")
    raise SystemExit(1)

print("Press 'q' or ESC to exit detection")
cv2.namedWindow("Fruit Detection")

while True:
    ret, frame = cap.read()
    if not ret:
        print("Unable to read frame")
        break

    results = model(frame)
    annotated_frame = results[0].plot()
    cv2.imshow("Fruit Detection", annotated_frame)

    key = cv2.waitKey(1) & 0xFF
    if key == ord("q") or key == 27:
        break

cap.release()
cv2.destroyAllWindows()
