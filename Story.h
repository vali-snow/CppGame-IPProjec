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
            if (i==11 and j==12) SetStoryColor(12); //skull
            if (i==11 and j==16) SetStoryColor(13);
            if (i==12 and j==11) SetStoryColor(12);
            if (i==12 and j==17) SetStoryColor(13);
            if (i==13 and j==11) SetStoryColor(12);
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
    char death[36][70]={
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.','"','"','-','-','.','.','_','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','[',']',' ',' ',' ',' ',' ',' ',' ','`','`','-','.','.','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.','\'','`',' ','`','\'','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','|','_','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','-','.','_',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',',','-','.','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','|','_',' ','`','`','`','-','-','-','.','.','_','_',' ',' ',' ',' ',' ','`','-','.',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ','/',':',':',':','\\','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','|','/','/','}',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','`','-','-','.','_',' ',' ','`','.',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ','|',':',':',':','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','/','/','/','/','}',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','-','.',' ','\\',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ','|',':',':',':','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','\'','/','/','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','.','\\',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ','|',':',':',':','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/',' ',' ','|','|','\'',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`','|',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ','|',':',':',':','|','/',' ',' ',' ',' ',' ',' ',' ',' ','_',',','-','/','/','\\',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','`',' ',' ',' ',' ','|',':',':',':','|','`','-',',','_','_',',','-','\'','`',' ',' ','|','/',' ',' ','\\',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','`',' ',' ','|',' ',' ',' ','|','\'','\'',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\\',' ',' ',' ','|','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','`',' ',' ',' ',' ','\\',' ',' ',' ','|',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ','/','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ','|','`',' ',' ',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',' ','|',')',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\\',' ','|',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\\',' ','|',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',',','.','_','_',' ',' ',' ',' ','\\','|',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','`',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','`',' ',' ',' ',' ','`','\\',' ',' ',' ','|',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ','\\',' ',' ','/',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ','|',' ','/',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ','`','(',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',')',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','_','_','_','_','_','_','_','_','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ','`','-','-','-','-','-','-','-','.','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ','|','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ','\\','/','`','-','.','_',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ','/','/',' ',' ',' ','`','.',' ',' ',' ',' ','/','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ','/','/','`','.',' ',' ',' ',' ','`','.',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ','/','/','/','\\',' ','`','-','.','_',' ',' ',')','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ','/','/','/','/',' ',')',' ',' ',' ','.','(','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ','|','|','|','|',' ',' ',' ',',','\'','`',' ',')',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ','|','|','|','|',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ','`','\\','\\','`',' ','/','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ','|','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ','/','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        '/','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        '`','-','.','_','_','_',',','-','.',' ',' ',' ',' ',' ',' ','.','-','.',' ',' ',' ',' ',' ',' ',' ',' ','_','_','_',',','\'',' ',' ',' ',' ',' ',' ',' ',' ','(','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
        ' ',' ',' ',' ',' ',' ',' ',' ',' ','`','-','-','-','\'','`',' ',' ',' ','`','\'','-','-','-','-','\'','`',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '
};

    while (choice!='Y' and choice!='y' and choice!='N' and choice!='n'){
        system ("CLS");
        SetStoryColor(14);
        cout << "Boris";
        SetStoryColor(15);
        cout << " has met his ";
        SetStoryColor(12);
        cout << "demise";
        SetStoryColor(15);
        cout << "!" << endl;
        cout << "Raise another ";
        SetStoryColor(14);
        cout << "Boris";
        SetStoryColor(15);
        cout << ", play again." << endl;

        SetStoryColor(13);
        for (int i=0;i<36;i++){
            for(int j=0;j<70;j++){
                cout << death[i][j];
                if (i==3 and j==54) SetStoryColor(12);
                if (i==3 and j==64) SetStoryColor(13);

                if (i==4 and j==21) SetStoryColor(14);
                if (i==4 and j==24) SetStoryColor(13);
                if (i==4 and j==41) SetStoryColor(14);
                if (i==4 and j==42) SetStoryColor(13);
                if (i==4 and j==43) SetStoryColor(14);
                if (i==4 and j==46) SetStoryColor(13);
                if (i==4 and j==56) SetStoryColor(12);
                if (i==4 and j==66) SetStoryColor(13);
                if (i==5 and j==21) SetStoryColor(14);
                if (i==5 and j==24) SetStoryColor(13);
                if (i==5 and j==40) SetStoryColor(14);
                if (i==5 and j==46) SetStoryColor(13);
                if (i==5 and j==62) SetStoryColor(12);
                if (i==5 and j==67) SetStoryColor(13);
                if (i==6 and j==21) SetStoryColor(14);
                if (i==6 and j==24) SetStoryColor(13);
                if (i==6 and j==39) SetStoryColor(14);
                if (i==6 and j==45) SetStoryColor(13);
                if (i==6 and j==65) SetStoryColor(12);
                if (i==6 and j==68) SetStoryColor(13);
                if (i==7 and j==21) SetStoryColor(14);
                if (i==7 and j==24) SetStoryColor(13);
                if (i==7 and j==38) SetStoryColor(14);
                if (i==7 and j==40) SetStoryColor(13);
                if (i==7 and j==44) SetStoryColor(14);
                if (i==7 and j==45) SetStoryColor(13);
                if (i==7 and j==67) SetStoryColor(12);
                if (i==7 and j==69) SetStoryColor(13);
                if (i==8 and j==21) SetStoryColor(14);
                if (i==8 and j==24) SetStoryColor(13);
                if (i==8 and j==37) SetStoryColor(14);
                if (i==8 and j==39) SetStoryColor(13);
                if (i==9 and j==21) SetStoryColor(14);
                if (i==9 and j==24) SetStoryColor(13);
                if (i==9 and j==37) SetStoryColor(14);
                if (i==9 and j==38) SetStoryColor(13);
                if (i==10 and j==21) SetStoryColor(14);
                if (i==10 and j==24) SetStoryColor(13);
                if (i==22 and j==3) SetStoryColor(14);
                if (i==22 and j==4) SetStoryColor(13);
                if (i==23 and j==3) SetStoryColor(14);
                if (i==23 and j==5) SetStoryColor(13);
                if (i==24 and j==2) SetStoryColor(14);
                if (i==24 and j==4) SetStoryColor(13);
                if (i==25 and j==1) SetStoryColor(14);
                if (i==25 and j==5) SetStoryColor(13);
                if (i==26 and j==0) SetStoryColor(14);
                if (i==26 and j==6) SetStoryColor(13);
                if (i==27 and j==0) SetStoryColor(14);
                if (i==27 and j==4) SetStoryColor(13);
                if (i==28 and j==0) SetStoryColor(14);
                if (i==28 and j==4) SetStoryColor(13);
                if (i==29 and j==0) SetStoryColor(14);
                if (i==29 and j==4) SetStoryColor(13);
            }
            cout << endl;
        }
        SetStoryColor(15);

        cout << "Do you want to play again? (Y/N)" << endl;
        choice=(char)getch();
    }
/*
                                         .""--..__
                     _                     []       ``-.._
                  .'` `'.                  ||__           `-._
                 /    ,-.\                 ||_ ```---..__     `-.
                /    /:::\\               /|//}          ``--._  `.
                |    |:::||              |////}                `-. \
                |    |:::||             //'///                    `.\
                |    |:::||            //  ||'                      `|
                /    |:::|/        _,-//\  ||
               /`    |:::|`-,__,-'`  |/  \ ||
             /`  |   |'' ||           \   |||
           /`    \   |   ||            |  /||
         |`       |  |   |)            \ | ||
        |          \ |   /      ,.__    \| ||
        /           `         /`    `\   | ||
       |                     /        \  / ||
       |                     |        | /  ||
       /         /           |        `(   ||
      /          .           /          )  ||
     |            \          |     ________||
    /             |          /     `-------.|
   |\            /          |              ||
   \/`-._       |           /              ||
    //   `.    /`           |              ||
   //`.    `. |             \              ||
  ///\ `-._  )/             |              ||
 //// )   .(/               |              ||
 ||||   ,'` )               /              //
 ||||  /                    /             ||
 `\\` /`                    |             //
     |`                     \            ||
    /                        |           //
  /`                          \         //
/`                            |        ||
`-.___,-.      .-.        ___,'        (/
         `---'`   `'----'`
*/
    system ("CLS");
    return choice;


}