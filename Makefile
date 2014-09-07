# C++ compiler 
CXX = g++
CFLAGS= -fPIC -shared -o
TARGET = ./libcv2.so
LIBS = -lopencv_highgui -lopencv_core
SOURCE = ./src/*.cpp
libcv2:
	$(CXX) $(SOURCE) $(CFLAGS) $(TARGET) $(LIBS)

