using namespace std;
int menu(){
    int choice;
    cout << "MENU"<< endl;
    cout << "START GAME (PRESS 1)" << endl;
    cout << "EXIT (PRESS 2)" << endl;
    cin >> choice;
    if (choice==1)
        return 0;
    else
        return 1;
}