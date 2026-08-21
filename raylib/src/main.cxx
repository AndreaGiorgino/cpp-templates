#include <raylib.h>

#include <defaults.hxx>

auto main(void) -> int {
    InitWindow(defaults::WIN_WIDTH, defaults::WIN_HEIGHT, "main");

    while (!WindowShouldClose()) {
        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
            DrawText("Hello raylib", 0, 0, 21, BLACK);
        }
        EndDrawing();
    }
    return 0;
}
