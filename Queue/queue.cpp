#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int front = -1;
int rear = -1;
int queue[10];
int maxSize = sizeof(queue) / sizeof(int);

void insertItem();
void deleteItem();
void display();

int main()
{
    int input;
    cout << "Select an opration: " << endl;
    cout << "[1] Insert." << endl;
    cout << "[2] Delete." << endl;
    cout << "[3] Exit." << endl;
    cout << "Choice : ";
takeInputAgain:
    cin >> input;

    switch (input)
    {
    case 1:
        insertItem();
        break;
    case 2:
        deleteItem();
        break;
    case 3:
        exit(0);
        break;
    default:
        cout << "Wrong Input, Enter correct input : ";
        goto takeInputAgain;
    }
    getch();
    return 0;
}

void display()
{
    system("cls");
    cout << "Front : " << front << " ,Rear : " << rear << endl;

    if (rear + 1 == maxSize)
    {
        cout << "Stack Full / Stack Overflow" << endl;
    }
    cout << "Queue :  ";
    for (int i = 0; i < maxSize; i++)
    {
        if (i < front || i > rear)
        {
            cout << setw(3) << "|";
        }
        else
        {
            cout << setw(3) << queue[i] << "|";
        }
    }
    cout << endl;
    main();
}

void insertItem()
{
    if (rear + 1 == maxSize)
    {
        display();
    }
    cout << "Enter the item to add : ";
    if (rear == -1)
    {
        front++;
    }
    rear++;
    cin >> queue[rear];
    display();
}

void deleteItem()
{
    if (front < rear)
        front++;
    display();
}