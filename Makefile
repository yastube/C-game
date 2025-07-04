# Project settings
TARGET = build/game.exe
OUTDIR = build

# Compiler and flags
CC = gcc
CFLAGS = -I"C:/raylib/raylib/src" -Wall

# Add the Raylib library folder path here
LDFLAGS = -L"C:/raylib/raylib/src"

# Raylib and required system libs
LIBS = -lraylib -lopengl32 -lgdi32 -lwinmm

# Source files
SOURCES = \
	src/main/main.c \
	src/main/window.c

# Build steps
all: $(OUTDIR) $(TARGET)

$(OUTDIR):
	@echo Creating output folder...
	@mkdir $(OUTDIR)

$(TARGET): $(SOURCES)
	@echo Compiling...
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET) $(LDFLAGS) $(LIBS)

clean:
	-del /Q $(OUTDIR)\* 2>nul || echo Already clean

.PHONY: all clean
