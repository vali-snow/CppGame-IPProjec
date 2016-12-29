// 1:Blue          2: Green        3: Cyan     4: Red          5: Purple
// 6: Yellow_Dark  7: White        8: Grey     9: Blue_Bright  10: Green_Bright
// 11: Cyan_Bright 12: Red_Bright  13: Magenta 14: Yellow      15: Bright white
void SetColor(WORD value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}

void SetMazeColor(int value){
    switch(value) {
        case 177 : SetColor(13); break; //color for ■
        default: SetColor(7); break;
    }
}

void update_maze_shadow(){
    maze_shadow.values[Boris.x-1][Boris.y-1]=1;
    maze_shadow.values[Boris.x-1][Boris.y]=1;
    maze_shadow.values[Boris.x-1][Boris.y+1]=1;
    maze_shadow.values[Boris.x][Boris.y-1]=1;
    maze_shadow.values[Boris.x][Boris.y]=1;
    maze_shadow.values[Boris.x][Boris.y+1]=1;
    maze_shadow.values[Boris.x+1][Boris.y-1]=1;
    maze_shadow.values[Boris.x+1][Boris.y]=1;
    maze_shadow.values[Boris.x+1][Boris.y+1]=1;
}
double highscore=maze_char.n*maze_char.m*100;
void printMap(){
    cout<<setw(2) <<"HIGHSCORE: "<<highscore<<"\n \n";

    for (int i = 0; i < maze_char.n; i++){
        for (int j = 0; j < maze_char.m; j++){
            if (maze_shadow.values[i][j]==1){
                if ((i==Boris.x and j==Boris.y)){
                    SetColor(6);
                    cout << setw(2) << char(66);
                } else if (i==exit_maze.x and j==exit_maze.y) {
                    SetColor(6);
                    cout << setw(2) << char(88);
                }else {
                    SetMazeColor(maze_char.values[i][j]);
                    cout << setw(2) <<  char(maze_char.values[i][j]);
                }
            }else{
                SetMazeColor(177);
                cout << setw(2) <<  char(177);
            }
        }
        cout << endl;
    }
    SetColor(7);
    
    highscore=highscore-100;
}

