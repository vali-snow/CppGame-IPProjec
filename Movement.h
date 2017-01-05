void ClearLastConsoleLine(){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,ROWS+2});
    WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE),"                                                  ",50,NULL,NULL);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,ROWS+2});
}

void move_player(int x, int y){
    if (maze_char.values[Boris.x+x][Boris.y+y]==177){
        return;
    } else {
        Boris.x+=x;
        Boris.y+=y;
        moves++;
    }
    switch(maze_char.values[Boris.x][Boris.y]) {
        case 1 : {
            lives--;
            maze_char.values[Boris.x][Boris.y]=32;
            break;
        }
        case 176 : {
            lives--;
            break;
        }
        default: break;
    }
    score=lives*100-moves;
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
        case 's' : move_player(1,0); break;
        default: return;
    }
}

void movement_update(){
    reset_variables();
    char keyboard_input;
    update_maze_shadow();
    printMap();
    while (Boris.x!=exit_maze.x or Boris.y!=exit_maze.y){
        cout << "Move player (WASD): ";
        keyboard_input=(char)getch();
        while (keyboard_input !='A' and keyboard_input !='D' and keyboard_input !='W' and keyboard_input !='S' and
               keyboard_input !='a' and keyboard_input !='d' and keyboard_input !='w' and keyboard_input !='s'){
            ClearLastConsoleLine();
            cout << "Enter a valid direction(WASD): ";
            keyboard_input=(char)getch();
        }
        system("CLS");
        move_player_input(keyboard_input);
        update_maze_shadow();
        if (lives<1||score==0){
            char choice=story_demise();
            if (choice=='Y' or choice=='y'){
                movement_update();
            }
            return;
        }
        printMap();
    }
    system("CLS");
    story_win();
}