#include <iostream>
using namespace std;
#include <iomanip>
#include "windows.h"
#include <Wincon.h>
#include "conio.h"

#define ROWS 22
#define COLUMNS 31

int lives,moves,bomb=0;
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
exit_loc exit_maze = {6,28};

void reset_variables(){
    lives=5;
    moves=100;
    score=lives*100-moves;
    Boris = {1,1};
    maze_char=      {ROWS,COLUMNS,
                     {177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177,
                      177,  32, 177,  32,  32,  32,  32,  32,  32, 177, 177,  32, 177,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32, 177,  32,  32,  32,  32,  32,  32, 177,
                      177,  32, 177, 177,  32, 177,  32, 177,  32,  32, 177,  32,  32,  32, 177, 177, 177,  32, 177, 177, 177, 177,  32, 177,  32, 177, 177, 177, 177, 177, 177,
                      177,  32, 177,  32,  32, 177,  32, 177, 177,  32, 177,  32, 177,  32, 177,  32,  32,  32,  32,  32,  32, 177,  32, 177,  32,  32, 177,  32,  32,  32, 177,
                      177,  32, 177,  245, 177, 177, 177,  32,  32,  32,  32,  32, 177,  32,  32, 177, 177,  32, 177, 177, 177,  32,  32, 177, 177,  32, 177,  32, 177,  32, 177,
                      177,  32, 177,  32, 177, 177, 177, 177, 177, 177, 177,  32,  32, 177,  32,  32, 177,  32, 177, 177,  32,  32, 177,  32,  32,  32,  32,  32, 177,  32, 177,
                      177,  32, 177,  32,  15, 177,  32,  32,  32, 177,  32,  32, 177, 177, 177,  32, 177,  32,  32,  32,  32, 177,  32,  32, 177, 177,  32, 177,  32,  32, 177,
                      177,  32, 177, 177,  32, 177, 177, 177,  32, 177, 177,  32,  32, 177,  32,  32, 177,  32, 177, 177, 177,  32,  32, 177,  32,  32,  32,  32, 177, 177, 177,
                      177,  32,  32,  32,  32, 177,  32,  32,  32,  32, 177, 177,  32, 177,  32, 177,  32,  32,  32, 177, 177,  32, 177, 177,  32, 177, 177,  32,  32, 177, 177,
                      177, 177, 177,  15 , 177, 177,  32, 177, 177,  32,  32,  32,  32, 177,  32,  32,  32, 177,  32,  32,  32,  32, 177,  32,  32, 177, 177, 177,  32,  32, 177,
                      177,  32,  32,  32, 177,  32,  32,  32, 177,  32,  32, 177,  32, 177,  32, 177,  32,  32,  32, 177, 177, 177, 177,  32, 177,  32,  32,  32,  32, 177, 177,
                      177,  32, 177, 177, 177, 177, 177,  32, 177, 177, 177, 177,  32, 177,  32,  32, 177,  32, 177,  32,  32,  32,  32,  32, 177,  32, 177,  32, 177,  32, 177,
                      177,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32, 177, 177,  32, 177,  32, 177,  32, 177,  32, 177, 177, 177,  32, 177, 177, 177,  32, 177,
                      177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177,  32, 177, 177, 177,  32, 177,  32, 177,  32, 177,  32, 177,  32, 177,  32,  32,  32,  32,  32, 177,
                      177,  32,  32,  32,  32,  32,  32,  32,  32,  32, 177,  32,  32,  32,  32,  32,  32,  32,  32,  32, 177,  32, 177,  32,  32,  32, 177, 177,  32, 177, 177,
                      177,  32, 177, 177, 177, 177, 177, 177, 177,  32, 177,  32, 177, 177, 177, 177,  32, 177, 177, 177,  32,  32, 177, 177, 177, 177,  32,  32,  32, 177, 177,
                      177,  32, 177,  32,  32,  32,  32,  32, 177,  32, 177,  32, 177, 177,  32, 177,  32, 177,  32,  32, 177,  32,  32,  32,  32,  32,  32, 177,  32,  32, 177,
                      177,  32, 177,  32, 177, 177, 177,  32, 177,  32, 177, 177, 177,  32,  32,  32,  32,  32,  32, 177,  32, 177, 177, 177, 177, 177, 177,  32,  32, 177, 177,
                      177,  32, 177,  32,  32,  32, 177,  32, 177,  32,  32,  32, 177,  32, 177, 177,  32, 177,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32, 177,  32, 177,
                      177,  32, 177, 177, 177, 177, 177,  32, 177,  32, 177,  32, 177, 177, 177,  32,  32, 177,  32, 177, 177,  32, 177, 177, 177, 177,  32, 177,  32,  32, 177,
                      177,  32,  32,  32,  32,  32,  32,  32, 177,  32,  32,  32,  32,  32,  32,  32,  32, 177,  32, 177,  32,  32,  32,  32, 177,  32,  32,  32,  32, 177, 177,
                      177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177,}};
    maze_shadow =     {ROWS,COLUMNS,
                       {  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                          0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,}};
};