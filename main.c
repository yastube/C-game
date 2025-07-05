#include <raylib.h> 

const int initialWidth = 800;
const int initialHeight = 450;

int main(void) {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(initialWidth, initialHeight, "Game");
    Font font = LoadFont("res/fonts/Poppins.ttf");

    const char* text = "test suahdua husahdu sahdu haushd";
    Vector2 measuring = MeasureTextEx(font, text, 20, 1.0f);

    while (!WindowShouldClose()) {
        float screenMidX = GetRenderWidth() / 2.f;
        float screenMidY = GetRenderHeight() / 2.f;

        BeginDrawing();
            ClearBackground(BLACK);
            DrawTextEx(font, text, (Vector2){screenMidX - measuring.x, screenMidY - measuring.y}, 20, 1.0f, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}