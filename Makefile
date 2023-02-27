CXX = g++
CXXFLAGS = -std=c++23 -Wall -c
LXXFLAGS = -std=c++23
OBJECTS = main.o hw1.o unit_test.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET) -lgtest -lgtest_main -pthread
main.o: main.cpp unit_test.cpp
	$(CXX) $(CXXFLAGS) main.cpp
hw1.o:hw1.cpp hw1.h
	$(CXX) $(CXXFLAGS) hw1.cpp
unit_test.o: unit_test.cpp
	$(CXX) $(CXXFLAGS) unit_test.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)