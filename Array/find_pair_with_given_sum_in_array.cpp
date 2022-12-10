#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num[10] = {1, 2, 5, 3, 6, 7, 8, 9, 6, 3};
    int target = 180;
    bool found = false;

    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        for (int j = i + 1; j < sizeof(num) / sizeof(int); j++)
        {
            if (num[i] + num[j] == target)
            {
                found = true;
                cout << "(" << num[i] << "," << num[j] << ")\t";
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
