void ClearLastConsoleLine(){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,ROWS});
    WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE),"                                                  ",50,NULL,NULL);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,ROWS});
}

void move_player(int x, int y){
    if (maze_char.values[Boris.x+x][Boris.y+y]==177){
        return;
    } else {
        Boris.x+=x;
        Boris.y+=y;
    }
}

void move_player_input(char value){
    switch(value) {
        case 'A' : move_player(0,-1); break; // move_left
        case 'a' : move_player(0,-1); break;
        case 'D' : move_player(0,1); break; // move_right
        case 'd' : move_player(0,1); break;
        case 'W' : move_player(-1,0); break; // move_up
        case 'w' : move_player(-1,0); break;
        case 'S' : move_player(1,0); break; // move_down
        case 's' : move_player(1,0);
        default: return;
    }
}

void maze_with_1()
{
    maze_shadow.values[Boris.x][Boris.y]=2;

    maze_shadow.values[Boris.x-1][Boris.y-1]=1;
    maze_shadow.values[Boris.x-1][Boris.y]=1;
    maze_shadow.values[Boris.x-1][Boris.y+1]=1;

    maze_shadow.values[Boris.x][Boris.y-1]=1;
    maze_shadow.values[Boris.x][Boris.y+1]=1;

    maze_shadow.values[Boris.x+1][Boris.y-1]=1;
    maze_shadow.values[Boris.x+1][Boris.y]=1;
    maze_shadow.values[Boris.x+1][Boris.y+1]=1;

}


void print_all_around_Boris_and_explored_zone()
{
    int i,j;
    for(i=0;i<maze_char.n;i++) {
        for (j = 0; j < maze_char.m; j++)
        {
            if (maze_shadow.values[i][j] == 2)
                cout << setw(2) << char(66);

            if (maze_shadow.values[i][j] == 1)
                if(i==4&&j==8)
                    cout << setw(2) << char(88);
                    else
                        cout << setw(2) << char(maze_char.values[i][j]);

            if (maze_shadow.values[i][j] == 0)
                cout << setw(2) << char(177);
        }

        cout << "\n";
    }


}
void movement_update(){
    char keyboard_input;
    //printMap();
    maze_with_1();
    print_all_around_Boris_and_explored_zone();
    while (Boris.x!=exit_maze.x or Boris.y!=exit_maze.y){
        cout << "Move player (WASD): ";
        cin >> keyboard_input;
        while (keyboard_input !='A' and keyboard_input !='D' and keyboard_input !='W' and keyboard_input !='S' and
               keyboard_input !='a' and keyboard_input !='d' and keyboard_input !='w' and keyboard_input !='s'){
            ClearLastConsoleLine();
            cout << "Enter a valid direction(WASD): ";
            cin >> keyboard_input;
        }
        system("CLS");
        move_player_input(keyboard_input);
        //printMap();
        maze_with_1();
        print_all_around_Boris_and_explored_zone();
    }
    system("CLS");
    story_win();
}


