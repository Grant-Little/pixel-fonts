These are simple bitmap fonts intended for pixel art games. Works out of the box with [raylib](https://github.com/raysan5/raylib).

# Important Information
 - The fonts contain all the standard ascii printable runes.
 - The fonts are named by the maximum height the runes can occupy. A line of text drawn from `pixel-font-8.png` will never exceed 8 pixels in height.
 - The runes are stored as white text in the .png files. This allows you to override their color in raylib using the tint argument in functions like `DrawTextEx()`.
 - The runes have a default spacing of zero. Use the `spacing` argument in `DrawTextEx()` to add spacing between runes. A spacing of 1.0 will add one pixel of spacing between all runes at one-to-one draw scale.
 - If you want to scale the runes up--for example, to have them fit properly into a larger window/render texture--then you will have to multiply the `fontSize` and `spacing` arguments in `DrawTextEx()` by your render scale.
# Example

```c
#include <raylib.h>

#define DRAW_SCALE 2.0

int main(void) {
    InitWindow(800, 600, "pixel font example");

    Font pixel_font_11 = LoadFont("pixel-font-11.png");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawTextEx(pixel_font_11, "hello world", (Vector2){.x = 4.0, .y = 4.0}, pixel_font_11.baseSize * DRAW_SCALE, 1.0 * DRAW_SCALE, LIGHTGRAY);

        EndDrawing();
    }
    UnloadFont(pixel_font_11);
    CloseWindow();
}
```

