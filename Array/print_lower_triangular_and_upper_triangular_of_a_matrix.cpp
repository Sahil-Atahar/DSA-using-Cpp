#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    // Printing Lower Trigular Matrix
    cout << "Lower Triangular Matrix : " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j > i)
                cout << 0 << "\t";
            else
                cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    // Printing Upper Triangular Matrix
    cout << "Upper Triangular Matrix : " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j < i)
                cout << 0 << "\t";
            else
                cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    getch();
    return 0;
}