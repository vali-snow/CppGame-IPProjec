
#include <iostream>
#include <iomanip>
using namespace std;

void matriceMaze() {
    int matrice[6][10] = {177, 177, 177, 177, 177, 177, 177, 177, 177, 177,
                          177, 32, 177, 32, 32, 32, 177, 177, 32, 177,
                          177, 32, 177, 32, 177, 32, 32, 177, 32, 177,
                          177, 32, 32, 32, 32, 177, 32, 32, 177, 177,
                          177, 177, 177, 32, 177, 177, 32, 32, 32, 177,
                          177, 177, 177, 177, 177, 177, 177, 177, 177, 177};
    int i, j;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
            cout <<setw(2)<< char(matrice[i][j]);
    cout << endl;
    }
}
