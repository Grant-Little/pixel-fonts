#include <raylib.h>

#define SCR_WIDTH 700
#define SCR_HEIGHT 500
#define DRAW_SCALE 3.0

int main(void) {
    const char *ascii_printable = " !\"#$%&\'()*+,-./0123456789:;<=>\?@\nABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`\nabcdefghijklmnopqrstuvwxyz{|}~";
    InitWindow(SCR_WIDTH, SCR_HEIGHT, "font test");

    Font font_8px = LoadFont("pixel-font-8.png");
    Font font_11px = LoadFont("pixel-font-11.png");
    Font font_15px = LoadFont("pixel-font-15.png");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);

        DrawTextEx(font_8px, "pixel-font-8.png:", (Vector2){.x = 4.0, .y = 4.0}, font_8px.baseSize * DRAW_SCALE, 1.0 *DRAW_SCALE, DARKGREEN);
        DrawTextEx(font_8px, ascii_printable, (Vector2){.x = 4.0, .y = 34.0}, font_8px.baseSize * DRAW_SCALE, 1.0 * DRAW_SCALE, DARKGREEN);
        DrawTextEx(font_11px, "pixel-font-11.png:", (Vector2){.x = 4.0, .y = 120.0}, font_11px.baseSize * DRAW_SCALE, 1.0 *DRAW_SCALE, DARKBLUE);
        DrawTextEx(font_11px, ascii_printable, (Vector2){.x = 4.0, .y = 160.0}, font_11px.baseSize * DRAW_SCALE, 1.0 * DRAW_SCALE, DARKBLUE);
        DrawTextEx(font_15px, "pixel-font-15.png:", (Vector2){.x = 4.0, .y = 280.0}, font_15px.baseSize * DRAW_SCALE, 1.0 *DRAW_SCALE, DARKPURPLE);
        DrawTextEx(font_15px, ascii_printable, (Vector2){.x = 4.0, .y = 340.0}, font_15px.baseSize * DRAW_SCALE, 1.0 * DRAW_SCALE, DARKPURPLE);

        EndDrawing();
    }
    UnloadFont(font_8px);
    UnloadFont(font_11px);
    UnloadFont(font_15px);

    CloseWindow();

    return 0;
}
