#include "raylib.h"
#include "window.h"

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitGameWindow(screenWidth, screenHeight, "Game");

    const char* text = "test";
    Vector2 measuring = MeasureTextEx(GetFontDefault(), text, 20, 1.0f);

    while (!WindowShouldClose()) {
        float screenMidX = GetRenderWidth() / 2.f;
        float screenMidY = GetRenderHeight() / 2.f;

        BeginDrawing();
            ClearBackground(BLACK);
            DrawText("test", screenMidX - measuring.x, screenMidY - measuring.y, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}