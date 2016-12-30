#include <iostream>
using namespace std;
#include <iomanip>
#include "windows.h"
#include <Wincon.h>
#include "conio.h"

#define ROWS 6
#define COLUMNS 10

int lives,moves;
long score=lives*100-moves;

struct matrix {
    int n;
    int m;
    int values[ROWS][COLUMNS];
};
matrix maze_char={0};
matrix maze_shadow={0};

struct player{
    int x;
    int y;
};
player Boris = {1,1};
struct exit_loc{
    int x;
    int y;
};
exit_loc exit_maze = {4,8};

void reset_variables(){
    lives=5;
    moves=0;
    score=lives*100-moves;
    Boris = {1,1};
    maze_char=      {ROWS,COLUMNS,
                     {177, 177, 177, 177, 177, 177, 177, 177, 177, 177,
                      177,  32, 177,  32,  32,  32, 177, 177,  32, 177,
                      177,  32, 177,  32, 177,  32,  32, 177,  32, 177,
                      177,  176, 1,  32,  32, 177,  32,  32, 177, 177,
                      177, 177, 177,  32, 177, 177,  32,  32,  32, 177,
                      177, 177, 177, 177, 177, 177, 177, 177, 177, 177}};
    maze_shadow =     {ROWS,COLUMNS,
                       {0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                        0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                        0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                        0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                        0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                        0,   0,   0,   0,   0,   0,   0,   0,   0,   0}};
};