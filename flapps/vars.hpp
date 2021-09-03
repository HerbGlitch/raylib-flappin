#pragma once

#include <raylib.h>
#include <stdlib.h>
#include <time.h>

namespace game {
    #define PLAYER_GRAVITY 1
    #define PLAYER_MAX_VELOCITY 40
    #define PLAYER_RADIUS 40
    #define PLAYER_JUMP_VELOCITY 20
    #define PLAYER_LEFT_OFFSET 200

    #define PIPE_START_SPEED 5
    #define PIPE_WIDTH 75
    #define PIPE_GAP 350
    #define PIPE_NUM 5
    #define PIPE_OFFSET_PADDING 200

    #define RAND_INT(x) (int)(rand() % ((int) x) + 1)

    struct Data {
        const int screenWidth = 1600;
        const int screenHeight = 1000;

        Data(){ srand(time(0)); }
    };
}
