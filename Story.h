#include <iostream>
#include <cstdlib>
using namespace std;

void story_intro(){
    cout << "Meet ■ (square)." << endl;
    cout << "His name is Boris" << endl;
    cout << "Boris is from far far away." << endl;
    cout << "Boris found a map, on one of his victims." << endl;
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
    cout << "VODKA!" << endl << flush;
    system ("PAUSE");
    system ("CLS");
}

void story_died(){
    cout << "Boris has met his demise!" << endl;
    cout << "Raise another Boris, play again." << endl << flush;
    system ("PAUSE");
    system ("CLS");
}

