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
    cout << "Boris has found the treasure chest." << endl;
    cout << "Boris opens it." << endl;
    cout << "And inside," << endl;
    cout << "To his amazement," << endl;
    cout << "He finds the most incredible of riches:" << endl << flush;
    system ("PAUSE");
    cout << score << " bottles of VODKA!" << endl << flush;
    system ("PAUSE");
    system ("CLS");
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