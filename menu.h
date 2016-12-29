char menu(){
    char choice;
    cout << "CONSOLE MAZE:MAIN MENU" << endl;
    cout << "START GAME (PRESS 1)" << endl;
    cout << "EXIT (PRESS X)" << endl;
    choice=(char)getch();
    system("CLS");
    return choice;
}