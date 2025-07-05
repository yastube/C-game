#include <stdio.h>
#include <raylib.h>
#include <raymath.h>
#include <math.h>

const int initialWidth = 450;
const int initialHeight = 450;

int main(void)
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(initialWidth, initialHeight, "Game");
    // SetTargetFPS(75);
    Vector2 center = {200, 200};
    float radius = 90;
    int segments = 90;
    float test[segments];
    float r[segments];
    for (int i = 0; i < segments; i++)
    {
        test[i] = r[i] = 0;
    }
    Vector2 prevpoint;
    float ac;
    while (!WindowShouldClose())
    {
        float dt = GetFrameTime();
        ac += dt;
        if (ac >= 1 / 75.f)
        {
            ac = 0;
            for (int i = 0; i < segments; i++)
            {
                float angle = 2 * PI * i / segments;
                r[i] += GetRandomValue(0, 2.5);
                test[i] = (sinf((r[i] / 9) + i) * 0.5f * 5);
                Vector2 newPoint = {
                    center.x + (radius + test[i]) * cosf(angle),
                    center.y + (radius + test[i]) * sinf(angle)};
                prevpoint = newPoint;
            }
        }
        BeginDrawing();
        ClearBackground(BLACK);
        for (int i = 0; i < segments; i++)
        {
            float angle = 2 * PI * i / segments;
            Vector2 newPoint = {
                center.x + (radius + test[i]) * cosf(angle),
                center.y + (radius + test[i]) * sinf(angle)
            };
            DrawLineV(prevpoint, newPoint, WHITE);
            prevpoint = newPoint;
        }
        DrawText("GAME", 100, 50, 40, WHITE);
        DrawFPS(20, 20);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}