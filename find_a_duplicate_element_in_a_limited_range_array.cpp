/*
Input:  { 1, 2, 3, 4, 4 }
Output: The duplicate element is 4

Input:  { 1, 2, 3, 4, 2 }
Output: The duplicate element is 2
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num[10] = {6, 7, 0, 3, 6, 7, 9, 0, 5, 2};
    int freaquency[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    int n = sizeof(num) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        if (num[i] < 0)
        {
            break;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                freaquency[i]++;
                for (int k = j; k < n; k++)
                {
                    num[k] = num[k + 1];
                    if (k == n - 1)
                    {
                        num[k] = -1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (freaquency[i] > 1)
            cout << num[i] << " repeats " << freaquency[i] << " times" << endl;
    }

    getch();
    return 0;
}
