# Compiler
CC := g++

# Compiler flags
CFLAGS := -Wall -Wextra -pedantic -std=c++11

# Source files
SOURCES := main.cpp mainwindow.cpp

# Object files
OBJECTS := $(SOURCES:.cpp=.o)

# Header files
HEADERS := mainwindow.h

# Executable name
TARGET := myprogram

# Build directory
BUILD_DIR := build

all: cmake_build

cmake_build:
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake -G "Unix Makefiles" ..
	$(MAKE) -C $(BUILD_DIR)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(BUILD_DIR)/$(TARGET)

# Rule to compile .cpp files to .o files
%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(BUILD_DIR)/$(TARGET)

clean:
	$(MAKE) -C $(BUILD_DIR) clean
	rm -f $(OBJECTS) $(BUILD_DIR)/$(TARGET)
	rmdir $(BUILD_DIR)

