// Find maximum product of two integers in an array

// For example, consider array {-10, -3, 5, 6, -2}. The maximum product is the (-10, -3) or (5, 6) pair.

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int array[] = {10, 3, 5, 6, 2};
    int n = sizeof(array) / sizeof(int);
    int product = 0, firstNo, secondNo;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (product < array[i] * array[j])
            {
                product = array[i] * array[j];
                firstNo = array[i];
                secondNo = array[j];
            }
        }
    }
    cout << "Maximum Product of two numbers: "<<firstNo << " * " << secondNo << " = " << product;
    getch();
    return 0;
}
