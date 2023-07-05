# Compiler
CC := g++

# Compiler flags
CFLAGS := -Wall -Wextra -pedantic -std=c++11

# Source files
SOURCES := main.cpp mainwindow.cpp evento.cpp lugares.cpp proveedor.cpp solicitudes.cpp usuario.cpp

# Object files
OBJECTS := $(SOURCES:.cpp=.o)

# Header files
HEADERS := mainwindow.h enums.h evento.h lugares.h proveedor.h solicitudes.h usuario.h

# Executable name
TARGET := myprogram

# Build directory
BUILD_DIR := build

DOXYGEN = doxygen
DOXYFILE = Doxyfile

OPEN_LINUX = xdg-open
OPEN_WINDOWS = cmd / c start
ifeq ($(OS), Windows_NT)
	RM =$(RM_WINDOWS)
	RUN = $(RUN_WINDOWS)
	BROWSER = $(OPEN_WINDOWS)
else
	RM =$(RM_LINUX)
	RUN = $(RUN_LINUX)
	BROWSER = $(OPEN_LINUX)
endif

all: cmake_build doc open

cmake_build:
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake -G "Unix Makefiles" -DCMAKE_PREFIX_PATH=/usr ..
	$(MAKE) -C $(BUILD_DIR)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(BUILD_DIR)/$(TARGET)

# Rule to compile .cpp files to .o files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(BUILD_DIR)/$(TARGET)

# Regla para generar el archivo de configuración Doxyfile
$(DOXYFILE):
	$(DOXYGEN) -g $(DOXYFILE)

# Regla para generar la documentación utilizando el archivo de configuración Doxyfile y luego abrirlo
doc: $(DOXYFILE)
	$(DOXYGEN) $(DOXYFILE)

open:
	$(BROWSER) html/index.html

clean:
	$(MAKE) -C $(BUILD_DIR) clean
	rm -f $(OBJECTS) $(BUILD_DIR)/$(TARGET)
	rmdir $(BUILD_DIR)

# Dependencies
main.o: mainwindow.h
mainwindow.o: mainwindow.h ui_mainwindow.h usuario.h enums.h evento.h lugares.h proveedor.h solicitudes.h
evento.o: evento.h enums.h
lugares.o: lugares.h
proveedor.o: proveedor.h
solicitudes.o: solicitudes.h
usuario.o: usuario.h