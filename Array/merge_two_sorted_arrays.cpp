/*
Input:

X[] = { 1, 4, 7, 8, 10 }
Y[] = { 2, 3, 9 }

Output:

X[] = { 1, 2, 3, 4, 7 }
Y[] = { 8, 9, 10 }
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x[] = {1, 4, 7, 8, 10};
    int y[] = {2, 3, 9};

    int z[8];
    int sizeOfx = sizeof(x) / sizeof(int);
    int sizeOfy = sizeof(y) / sizeof(int);
    int sizeOfz = sizeof(z) / sizeof(int);
    int i, j;

    // printing x and y array before sorting
    cout << "printing x and y array before sorting" << endl;
    cout << "X elements are: ";
    for (i = 0; i < sizeOfx; i++)
    {
        cout << x[i];
        if (i != sizeOfx - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
    cout << "Y elements are: ";
    for (i = 0; i < sizeOfy; i++)
    {
        cout << y[i];
        if (i != sizeOfy - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
    // Merging both array x and y and saving into new z array
    for (i = 0; i < sizeOfz; i++)
    {
        if (i < sizeOfx)
            z[i] = x[i];
        else
            z[i] = y[i - sizeOfx];
    }

    // Sorting the z array
    for (i = 0; i < sizeOfz - 1; i++)
    {
        if (z[i] > z[i + 1])
        {
            for (j = i; j > 0; j--)
            {

                z[j] = z[j] + z[j + 1];
                z[j + 1] = z[j] - z[j + 1];
                z[j] = z[j] - z[j + 1];

                if (z[j] > z[j - 1])
                    break;
            }
        }
    }

    for (i = 0; i < sizeOfz; i++)
    {
        if (i < sizeOfx)
            x[i] = z[i];
        else
            y[i - sizeOfx] = z[i];
    }

    // printing x and y array after sorting
    cout << "printing x and y array after sorting" << endl;
    cout << "X elements are: ";
    for (i = 0; i < sizeOfx; i++)
    {
        cout << x[i];
        if (i != sizeOfx - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
    cout << "Y elements are: ";
    for (i = 0; i < sizeOfy; i++)
    {
        cout << y[i];
        if (i != sizeOfy - 1)
        {
            cout << ", ";
        }
    }
    getch();
    return 0;
}
