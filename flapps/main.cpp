#include <string>
#include "vars.hpp"

int main(){
    InitWindow(100, 100, "flapps");
    const int screenWidth = 800;

    SetTargetFPS(60);
    while(!WindowShouldClose()){
        BeginDrawing(); //raylib staring drawing loop
        ClearBackground(WHITE); //we should remove this at some point in time when we are drawing to see what it does :P

        //update here


        //render here  <---- Gree circle below here pls :)
        DrawCircle(screenWidth/5, 120, 35, GREEN);
        

        DrawFPS(10, 10);

        EndDrawing(); //raylib closing drawing loop
    }

    CloseWindow(); //person closed window, we are chillin

    return 0;
}

//to test, pls run make in cmd