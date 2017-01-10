// 1:Blue          2: Green        3: Cyan     4: Red          5: Purple
// 6: Yellow_Dark  7: White        8: Grey     9: Blue_Bright  10: Green_Bright
// 11: Cyan_Bright 12: Red_Bright  13: Magenta 14: Yellow      15: Bright white
void SetStoryColor(WORD value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}

void story_intro(){
    cout << "Meet our hero." << endl;
    cout << "His name is Boris." << endl;
    cout << "Boris is from far far away." << endl;
    cout << "Slav born and raised." << endl;
    cout << "Boris found a map on one of his victims." << endl;
    cout << "..." << endl;
    cout << "Boris want to find out what X stand for." << endl;
    cout << "And here begins the story of Boris, as he enters the maze .." << endl << flush;
    system ("PAUSE");
    system ("CLS");
}

void story_win(){
    char bottle[31][30]={
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','_','_','_','_','_','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','(',' ','_',' ','_',' ','_',')',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','_',' ','_',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','(','_',' ','_',' ','_',' ',')',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','_','_','_','_','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','/',' ',' ','\\','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','(',' ','7','2',' ',')',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','\\','_','_','/','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ',' ',' ',' ',' ','.','-','\'',' ',' ','.','-','-','.',' ',' ','`','-','.',' ',' ',' ',' ',' ',' ',' ',' ',
            ' ',' ',' ',' ','_','.','-','\'',' ',' ',' ',' ',':','(','.','.',')',':',' ',' ',' ',' ','`','-','.','_',' ',' ',' ',' ',
            ' ',' ','.','\'',' ',' ',' ',' ',' ',' ',' ',' ','`','-','.','.','-','\'',' ',' ',' ',' ',' ',' ',' ',' ','`','.',' ',' ',
            ' ',' ','|','_','_','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','_','_','_','|',' ',' ',
            ' ',' ','|',' ',' ',' ','`','`','`','`','`','-','-','.','.','.','.','-','-','\'','\'','\'','\'','\'',' ',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|','`','`','`','`','`','-','-','.','.','.','.','-','-','\'','\'','\'','\'','\'','|',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ','P','R','I','V','A','T','E',' ',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ',' ','R','E','S','E','R','V','E',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ',' ',' ','O','F',':',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ',' ',' ','T','u','d','o','r',' ',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ',' ','D','o','r','i','n','a',' ',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ','V','a','l','e','n','t','i','n',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ',' ','V','O','D','K','A',' ',' ',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',
            ' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ',' ',' ','X','X','O',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',
            ' ','.','\'',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ','`','.',' ',
            '(',' ',' ','`','-','.','`','`','`','`','`','-','-','.','.','.','.','-','-','\'','\'','\'','\'','\'','.','-','\'',' ',' ',')',
            ' ','`','`','-','.','.','_','`','`','-','-','.','.','_','.','.','_','.','.',':','F','_','P',':','.','-','-','\'','\'',' ',
            ' ',' ',' ',' ',' ',' ',' ','`','`','-','-','.','.','_',' ',' ','_','.','.','-','-','\'','\'',' ',' ',' ',' ',' ',' ',' '
    };

    SetStoryColor(14);
    cout << "Boris";
    SetStoryColor(15);
    cout << " has found the ";
    SetStoryColor(13);
    cout << "treasure chest";
    SetStoryColor(15);
    cout << "." << endl;

    SetStoryColor(14);
    cout << "Boris";
    SetStoryColor(15);
    cout << " opens it." << endl;

    cout << "And inside," << endl;
    cout << "To his amazement," << endl;
    cout << "He finds the most incredible of riches:" << endl << flush;
    system ("PAUSE");

    SetStoryColor(14);
    cout << endl << "     " << score;
    SetStoryColor(15);
    cout << " bottles of ";
    SetStoryColor(13);
    cout << "VODKA";
    SetStoryColor(15);
    cout << "!" << endl << flush;

    SetStoryColor(13);
    for (int i=0;i<31;i++){
        for(int j=0;j<30;j++){
            cout << bottle[i][j];
            if (i==7 and j==13) SetStoryColor(14); //72
            if (i==7 and j==15) SetStoryColor(13);

            if (i==11 and j==12) SetStoryColor(4); //skull
            if (i==11 and j==16) SetStoryColor(13);
            if (i==12 and j==11) SetStoryColor(4);
            if (i==12 and j==17) SetStoryColor(13);
            if (i==13 and j==11) SetStoryColor(4);
            if (i==13 and j==17) SetStoryColor(13);

            if (i==17 and j==10) SetStoryColor(14); //private
            if (i==17 and j==17) SetStoryColor(13);
            if (i==18 and j==11) SetStoryColor(14); //reserve
            if (i==18 and j==18) SetStoryColor(13);
            if (i==19 and j==12) SetStoryColor(14); //of
            if (i==19 and j==15) SetStoryColor(13);

            if (i==21 and j==12) SetStoryColor(15); //tudor
            if (i==21 and j==17) SetStoryColor(13);
            if (i==22 and j==11) SetStoryColor(15); //dorina
            if (i==22 and j==17) SetStoryColor(13);
            if (i==23 and j==10) SetStoryColor(15); //valentin
            if (i==23 and j==18) SetStoryColor(13);

            if (i==25 and j==11) SetStoryColor(14); //vodka
            if (i==25 and j==16) SetStoryColor(13);
            if (i==26 and j==12) SetStoryColor(14); //xxo
            if (i==26 and j==15) SetStoryColor(13);
        }
        cout << endl;
    }
    SetStoryColor(15);
    system ("PAUSE");
    system ("CLS");

/*
            ______
           ( _ _ _)
            |_ _ |
           (_ _ _ )
            |    |
            |____|
            |/  \|
            ( 72 )
            |\__/|
            |    |
           /      \
        .-'  .--.   `-.
    _.-'    :(..):    `-._
  .'        `-..-'        `.
  |___                  ___|
  |   `````--....--'''''   |
  |  |`````--....--'''''|  |
  |  |      VODKA       |  |
  |  |       XXO        |  |
  |  |                  |  |
  |  |     PRIVATE      |  |
  |  |      RESERVE     |  |
  |  |       OF:        |  |
  |  |                  |  |
  |  |       Tudor      |  |
  |  |      Dorina      |  |
  |  |     Valentin     |  |
 .'  |                  |  `.
(  `-.`````--....--'''''.-'  )
 ``-.._``--.._.._..:F_P:.--''
       ``--.._  _..--''
*/
}

char story_demise(){
    char choice='Z';
    while (choice!='Y' and choice!='y' and choice!='N' and choice!='n'){
        system ("CLS");
        cout << "Boris has met his demise!" << endl;
        cout << "Raise another Boris, play again." << endl;
        cout << "Do you want to play again? (Y/N)" << endl;
        choice=(char)getch();
    }
    system ("CLS");
    return choice;
}