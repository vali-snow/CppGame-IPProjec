#include <iostream>
using namespace std;

int menu()
    {
        int choice;
        cout<<"MENU";
        cout<<"\n";
        cout<<"START GAME  (PRESS 1)";
        cout<<"\n";
        cout<<"EXIT (PRESS 2)";

        cin>>choice;
        if(choice==1)
            return 0;
         else
            return 1;
    };

int main()

{

    if(menu()!=1)
    {
        cout << "test" << endl;
    }
    return 0;
}