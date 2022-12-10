/*
nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }
target = 8

Subarrays with sum 8 are

{ -5, 5, 3, 5 }
{ 3, 5 }
{ 5, 3 }

The longest subarray is { -5, 5, 3, 5 } having length 4
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num[10] = {1, 2, 5, 3, 6, 7, 8, 9, 6, 3};
    int target = 10, sum;
    bool found = false;

    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        sum = num[i];

        for (int j = i + 1; j < sizeof(num) / sizeof(int); j++)
        {
            sum += num[j];
            if (sum == target)
            {
                found = true;
                cout << "{";
                for (int k = j; k >= i; k--)
                {
                    cout << num[k];
                    if (k != i)
                        cout << ", ";
                }
                cout << "}" << endl;
            }
        }
    }

    if (!found)
    {
        cout << "No pair found";
    }
    getch();
    return 0;
}
