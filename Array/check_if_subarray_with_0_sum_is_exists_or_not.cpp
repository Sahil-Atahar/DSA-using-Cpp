/*
Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }

Output: Subarray with zero-sum exists

The subarrays with a sum of 0 are:

{ 3, 4, -7 }
{ 4, -7, 3 }
{ -7, 3, 1, 3 }
{ 3, 1, -4 }
{ 3, 1, 3, 1, -4, -2, -2 }
{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num[10] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int sum = 0;

    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        sum = num[i];

        for (int j = i + 1; j < sizeof(num) / sizeof(int); j++)
        {
            sum += num[j];
            if (sum == 0)
            {
                for (int k = i; k <= j; k++)
                {
                    if (k == i)
                    {
                        cout << "{";
                    }
                    cout << num[k] << ",";
                    if (k == j)
                    {
                        cout << "}\t";
                    }
                }
            }
        }
    }
    getch();
    return 0;
}
