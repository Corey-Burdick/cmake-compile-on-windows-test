#include <raylib.h>

int main() {
 
  const char *message = "If you see this, it worked.";
  Image icon = LoadImage("assets/graphics/Heart-Icon.png");
  InitWindow(500, 500, "Test");
  SetTargetFPS(60);
  SetWindowIcon(icon);

  Font font = GetFontDefault();

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(WHITE);

    
    DrawText(message, GetScreenWidth() / 2 - MeasureText(message, 20) / 2, GetScreenHeight() / 2, 20, BLACK);

    DrawFPS(0, 0);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
