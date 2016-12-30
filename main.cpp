#include "GlobalVariables.h"
#include "menu.h"
#include "Story.h"
#include "MazeMap.h"
#include "Movement.h"

int main(){
    SetColor(7);
    char choice=menu();
    if (choice=='1'){
        story_intro();
        movement_update();
    }else if (choice=='X' or choice=='x'){
        return 0;
    }else{
        system("CLS");
        SetColor(4);
        cout << "You can only chose 1 or X! Try again;" << endl;
        main();
    }
}