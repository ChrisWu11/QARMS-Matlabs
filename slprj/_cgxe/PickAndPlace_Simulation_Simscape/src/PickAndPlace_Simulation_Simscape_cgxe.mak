# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL  = PickAndPlace_Simulation_Simscape
TARGET = cgxe
MODULE_SRCS 	= m_eZ8Q20pDV7O0CnikSSPLsF.c
MODEL_SRC	= PickAndPlace_Simulation_Simscape_cgxe.c
MODEL_REG = PickAndPlace_Simulation_Simscape_cgxe_registry.c
MAKEFILE    = PickAndPlace_Simulation_Simscape_cgxe.mak
MATLAB_ROOT	= E:\matlab2024b
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------


USER_INCLUDES   =  /I "E:\Applied Robotics\project-ar\QARMS-Matlabs-main" /I "E:\Applied Robotics\project-ar\QARMS-Matlabs-main\slprj\_cprj"

MLSL_INCLUDES     = \
    /I "E:\matlab2024b\extern\include" \
    /I "E:\matlab2024b\simulink\include" \
    /I "E:\matlab2024b\rtw\c\src"
COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   =  /I "E:\Applied Robotics\project-ar\QARMS-Matlabs-main\slprj\_cgxe\PickAndPlace_Simulation_Simscape\src" /I "E:\matlab2024b\extern\include\shared_robotics" /I "E:\matlab2024b\toolbox\shared\robotics\externalDependency\libccd\src" /I "E:\matlab2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd"
INCLUDE_PATH = $(MLSL_INCLUDES) $(USER_INCLUDES) $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"
CFLAGS = /c /Zp8 /GR /w /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMX_COMPAT_64 /DMATLAB_MEXCMD_RELEASE=R2018a /DMATLAB_MEX_FILE /nologo /MD   -Dccd_EXPORTS
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

USER_OBJS =

AUX_SRCS = E:\matlab2024b\extern\version\c_mexapi_version.c E:\matlab2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_ccd.c E:\matlab2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_mpr.c E:\matlab2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_polytope.c E:\matlab2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_vec3.c E:\matlab2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_CollisionGeometry.cpp E:\matlab2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_api.cpp E:\matlab2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_ccdExtensions.cpp E:\matlab2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_checkCollision.cpp  

REQ_SRCS  = $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS) $(AUX_SRCS)
REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_OBJS) $(AUX_ABS_OBJS)
OBJLIST_FILE = PickAndPlace_Simulation_Simscape_cgxe.mol
TMWLIB = "E:\matlab2024b\extern\lib\win64\microsoft\libmx.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libmex.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libmat.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libfixedpoint.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libut.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libmwmathutil.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libemlrt.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libmwcgxert.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libmwcgxeooprt.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libmwslexec_simbridge.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libmwslccrt.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libmwstringutil.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libcovrt.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libmwsl_sfcn_cov_bridge.lib" "E:\matlab2024b\extern\lib\win64\microsoft\libmwdsp_halidesim.lib" 
THIRD_PARTY_LIBS = 

#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
all : $(MEX_FILE_NAME) 


$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS)
	@echo ### Linking ...
	$(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map" $(TMWLIB) $(THIRD_PARTY_LIBS) @$(OBJLIST_FILE)
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

