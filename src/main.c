#include "raylib.h"
#include "window.h"

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitGameWindow(screenWidth, screenHeight, "Game");

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("test", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}