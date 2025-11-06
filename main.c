// main.c
#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Jogo Rodando no WSL com WSLg!");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Raylib Funcionando!", 190, 200, 20, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}