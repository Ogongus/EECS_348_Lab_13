CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

TARGET = lab13_debugging
SOURCES = lab13_debugging.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all:$(TARGET)
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all run clean