#include <raylib.h>
#include "window.h"

void InitGameWindow(int width, int height, const char *title) {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(width, height, title);
}