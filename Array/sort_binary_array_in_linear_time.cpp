/*
Input:  { 1, 0, 1, 0, 1, 0, 0, 1 }

Output: { 0, 0, 0, 0, 1, 1, 1, 1 }
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int binaryNo[] = {1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0};

    int n = sizeof(binaryNo) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        if (binaryNo[i] == 0)
        {
            for (int k = i; k > 0; k--)
            {
                if (binaryNo[k - 1] == 0)
                    break;
                /*
                Number Swaping concept
                a = 5, b = 3
                a = a + b    //--> a = 8 , b = 3
                b = a - b   // --> b = 5, a =8
                a = a -b    // --> b = 5 , a = 3
                */
                binaryNo[k] = binaryNo[k] + binaryNo[k - 1];
                binaryNo[k - 1] = binaryNo[k] - binaryNo[k - 1];
                binaryNo[k] = binaryNo[k] - binaryNo[k - 1];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << binaryNo[i];
        if (i != n - 1)
        {
            cout << ", ";
        }
    }
    getch();
    return 0;
}
