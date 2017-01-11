// 1:Blue          2: Green        3: Cyan     4: Red          5: Purple
// 6: Yellow_Dark  7: White        8: Grey     9: Blue_Bright  10: Green_Bright
// 11: Cyan_Bright 12: Red_Bright  13: Magenta 14: Yellow      15: Bright white
void SetColor(WORD value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}

void SetMazeColor(int value){
    switch(value) {
        case 1: SetColor(12);break; //color for enemy
        case 3: SetColor(12);break;
        case 4: SetColor(9);break;
        case 15: SetColor(4);break;
        case 176: SetColor(10);break; //color for trap
        case 177: SetColor(13); break; //color for wall
        case 178: SetColor(13); break;
        case 179: SetColor(13); break;
        case 245: SetColor(15); break;
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

void printMap(){
    for (int i = 0; i < maze_char.n; i++){
        for (int j = 0; j < maze_char.m; j++){
            if (maze_shadow.values[i][j]==1){
                    if ((i==Boris.x and j==Boris.y)){
                            SetColor(6);
                            cout << setw(2) << char(66);
                        }else if(i==exit_maze.x and j==exit_maze.y){
                            SetColor(6);
                            cout << setw(2) << char(88);
                        }else{
                            SetMazeColor(maze_char.values[i][j]);
                            if(maze_char.values[i][j]==178 or maze_char.values[i][j]==179){
                                cout << setw(2) << char(177);
                            } else{
                                cout << setw(2) << char(maze_char.values[i][j]);
                            }
                        }
                }else{
                    SetMazeColor(177);
                    cout << setw(2) << char(177);
                }
        }
        SetColor(14);
        switch(i) {
            case  1:{
                cout << "   |   ";
                SetColor(13);
                cout << "LEGEND";
                SetColor(14);
                cout << "           |";
                break;
            }
            case  3:{
                cout << "   |   ";
                SetColor(13);
                cout << "ENEMY:       ";
                SetMazeColor(1);
                cout <<char(1);
                SetColor(14);
                cout << "   |";
                break;
            }
            case  4:{
                cout << "   |   ";
                SetColor(13);
                cout << "TRAP:        ";
                SetMazeColor(176);
                cout << char(176);
                SetColor(14);
                cout << "   |";
                break;
            }
            case  5:{
                cout << "   |   ";
                SetColor(13);
                cout << "REVEAL MAZE: ";
                SetMazeColor(245);
                cout << char(245);
                SetColor(14);
                cout << "   |"; break;
            }
            case  6:{
                cout << "   |   ";
                SetColor(13);
                cout << "BOMBS:       ";
                SetMazeColor(15);
                cout << char(15);
                SetColor(14);
                cout << "   |";
                break;
            }
            case  7:{
                cout << "   |   ";
                SetColor(13);
                cout << "BONUS SCORE: ";
                SetMazeColor(4);
                cout << char(4);
                SetColor(14);
                cout << "   |";
                break;
            }
            case  8:{
                cout << "   |   ";
                SetColor(13);
                cout << "BONUS LIFE:  ";
                SetMazeColor(3);
                cout << char(3);
                SetColor(14);
                cout << "   |";
                break;
            }
            case  9:{
                cout << "   |   ";
                SetColor(13);
                cout << "SHADOW WALL: " << char(177);
                SetColor(14);
                cout << "   |";
                break;
            }
            case 11:{
                cout << "   |   ";
                SetColor(5);
                cout << "NOT ALL THOSE";
                SetColor(14);
                cout << "    |";
                break;
            }
            case 12:{
                cout << "   |   ";
                SetColor(5);
                cout << "WHO WONDER";
                SetColor(14);
                cout << "       |";
                break;
            }
            case 13:{
                cout << "   |   ";
                SetColor(5);
                cout << "ARE LOST";
                SetColor(14);
                cout << "         |";
                break;
            }
            case 15:{
                cout << "   |   ";
                SetColor(13);
                cout << "STATS";
                SetColor(14);
                cout << "            |";
                break;
            }
            case 17: {
                cout << "   |   ";
                SetColor(13);
                cout << "SCORE: ";
                SetColor(15);
                cout << score;
                SetColor(14);
                if (score>1000) cout << "      |";
                else if (score>100) cout << "       |";
                else if (score>10) cout << "        |";
                else if (score>0) cout << "         |";
                break;
            }
            case 18:{
                cout << "   |   ";
                SetColor(13);
                cout << "LIVES: ";
                SetMazeColor(3);
                if (lives>5){
                    cout << char(3) << char(3) << char(3) << char(3) << char(3) << "+";
                    SetColor(14);
                    cout << "    |";
                }else{
                    for(int l=0;l<lives;l++) cout << char(3);
                    SetColor(14);
                    for(int l=0;l<10-lives;l++) cout << " ";
                    cout << "|";
                }
                break;
            }
            case 19:{
                cout << "   |   ";
                SetColor(13);
                cout << "MOVES: ";
                SetColor(15);
                cout << moves;
                SetColor(14);
                if (moves>999) cout << "      |";
                else if (moves>99) cout << "       |";
                else if (moves>9) cout << "        |";
                else if (moves>-1) cout << "         |";
                break;
            }
            case 20:{
                cout << "   |   ";
                SetColor(13);
                cout << "BOMBS: ";
                if (bomb>5){
                    SetMazeColor(15);
                    cout << char(15) << char(15) << char(15) << char(15) << char(15) << "+";
                    SetColor(14);
                    cout << "    |";
                }else if (bomb==0){
                    SetColor(15);
                    cout << "0";
                    SetColor(14);
                    cout << "         |";
                }else{
                    SetMazeColor(15);
                    for(int l=0;l<bomb;l++) cout << char(15);
                    SetColor(14);
                    for(int l=0;l<10-bomb;l++) cout << " ";
                    cout << "|";
                }
                break;
            }
            default: cout << "   #---" << "-----------------#"; break;
        }
        cout << endl;
    }
    SetColor(7);
}