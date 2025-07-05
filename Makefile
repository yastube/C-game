# Project settings
TARGET = build/game.exe

# Compiler and flags
CC = gcc
CFLAGS = -I"C:/raylib/raylib/src" -I"C:/raylib/raylib/include" -I. -Wall

# Add the Raylib library folder path here
LDFLAGS = -L"C:/raylib/raylib/src" -L"C:/raylib/raylib/lib"

# Raylib and required system libs
LIBS = -lraylib -lopengl32 -lgdi32 -lwinmm

# Source files
SOURCES = \
	main.c

all:
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET) $(LDFLAGS) $(LIBS) 
# -mwindows

.PHONY: all
