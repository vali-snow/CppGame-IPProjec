#include <iostream>
using namespace std;
#include <iomanip>
#include "windows.h"
#include <Wincon.h>
#include "conio.h"

#define ROWS 6
#define COLUMNS 10

struct matrix {
    int n;
    int m;
    int values[ROWS][COLUMNS];
};
matrix maze_char=      {ROWS,COLUMNS,
                       {177, 177, 177, 177, 177, 177, 177, 177, 177, 177,
                        177,  32, 177,  32,  32,  32, 177, 177,  32, 177,
                        177,  32, 177,  32, 177,  32,  32, 177,  32, 177,
                        177,  176, 1,  32,  32, 177,  32,  32, 177, 177,
                        177, 177, 177,  32, 177, 177,  32,  32,  32, 177,
                        177, 177, 177, 177, 177, 177, 177, 177, 177, 177}};
matrix maze_shadow =     {ROWS,COLUMNS,
                         {0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0}};

struct player{
    int x;
    int y;
};
struct exit_loc{
    int x;
    int y;
};
player Boris = {1,1};
exit_loc exit_maze = {4,8};

long score;
int lives=5,moves=0,moves1;