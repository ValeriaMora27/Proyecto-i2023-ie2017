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
TARGET := ProyectoEventos

# Executable suffix
ifeq ($(OS), Windows_NT)
	EXE_SUFFIX := .exe
else
	EXE_SUFFIX :=
endif

# Build directory
BUILD_DIR := build

# Full executable path
EXE_PATH := $(BUILD_DIR)/$(TARGET)$(EXE_SUFFIX)

DOXYGEN = doxygen
DOXYFILE = Doxyfile

OPEN_LINUX = xdg-open
OPEN_WINDOWS = cmd /c start
ifeq ($(OS), Windows_NT)
	RM = del /F /Q
	RUN = $(EXE_PATH)
	BROWSER = $(OPEN_WINDOWS)
else
	RM = rm -f
	RUN = ./$(EXE_PATH)
	BROWSER = $(OPEN_LINUX)
endif

all: cmake_build doc open run

build: cmake_build doc open

cmake_build:
	if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake -G "Unix Makefiles" -DCMAKE_PREFIX_PATH=/usr ..
	$(MAKE) -C $(BUILD_DIR)

# Rule to compile .cpp files to .o files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

run: $(EXE_PATH)
	$(RUN)

# Rule to generate the Doxyfile configuration file
$(DOXYFILE):
	$(DOXYGEN) -g $(DOXYFILE)

# Rule to generate documentation using the Doxyfile configuration file and then open it
doc: $(DOXYFILE)
	$(DOXYGEN) $(DOXYFILE)

open:
	$(BROWSER) html/index.html

clean:
	$(MAKE) -C $(BUILD_DIR) clean
	$(RM) $(EXE_PATH)



# Dependencies
main.o: mainwindow.h
mainwindow.o: mainwindow.h ui_mainwindow.h usuario.h enums.h evento.h lugares.h proveedor.h solicitudes.h estadisticas.h
evento.o: evento.h enums.h
lugares.o: lugares.h
proveedor.o: proveedor.h
solicitudes.o: solicitudes.h
usuario.o: usuario.h
estadisticas.o: estadisticas.h
