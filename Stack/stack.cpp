#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main();
int top = -1;
int stack[10];
int maxSize = sizeof(stack)/sizeof(int);

void displayStack();
void insertItemInStack();
void deleteElementFromStack();

int main()
{

    int input;
    cout << "Select an Opration:" << endl;
    cout << "[1] Insert." << endl;
    cout << "[2] Delete." << endl;
    cout << "[3] Exit." << endl;
    cout << "Choice : ";
inputAgain:
    cin >> input;

    switch (input)
    {
    case 1:
        insertItemInStack();
        break;
    case 2:
        deleteElementFromStack();
        break;
    case 3:
        exit(0);
        break;
    default:
        cout << "Wrong input,Enter valid input: ";
        goto inputAgain;
    }
    getch();
    return 0;
}

//* Displaying the stack
void displayStack()
{
    system("cls");
    cout << "Top : " << top << endl;
    if (top < 0)
    {
        cout << "Stack UnderFlow / Statck Empty";
        main();
    }
    if (top == maxSize - 1)
    {
        cout << "StackFull / Stack Overflow" << endl;
    }
    for (int i = top; i >= 0; i--)
    {
        cout << "| " << setw(3) << stack[i] << "|" << endl;
        cout << "------" << endl;
    }
    main();
}

//* Inserting Element into Stack
void insertItemInStack()
{
    if (top != maxSize - 1)
    {
        cout << "Enter the element to add :";
        top++;
        cin >> stack[top];
    }
    displayStack();
}

//! Deleting Stack Element
void deleteElementFromStack()
{
    top--;
    displayStack();
}