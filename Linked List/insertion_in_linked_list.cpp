#include <iostream>
#include <conio.h>

using namespace std;

struct NODE
{
    int data;
    struct NODE *next;
};

typedef struct NODE Node;

void insertNode(Node **node, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *node;
    *node = newNode;
}

void printNode(Node **receivedNode)
{
    Node *node = *receivedNode;
    cout << "Data are : ";
    while (node->next)
    {
        cout << node->data << "\t";
        node = node->next;
    }
    cout << endl;
}

// void deleteNode(Node **node, int data)
// {
//     Node **prev = node;
//     while ((*node)->next)
//     {
//         if ((*node)->data == data)
//         {
//             cout << "called";
//             (*prev)->next = (*node)->next;
//             free(*node);
//             break;
//         }
//         *prev = *node;
//         *node = (*node)->next;
//     }
// }

int main()
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->next = NULL;
    insertNode(&node, 1);
    insertNode(&node, 2);
    insertNode(&node, 3);
    insertNode(&node, 4);
    insertNode(&node, 5);
    insertNode(&node, 6);
    insertNode(&node, 7);
    insertNode(&node, 8);
    insertNode(&node, 9);
    insertNode(&node, 10);

    printNode(&node);

    // deleteNode(&node, 5);

    printNode(&node);

    getch();
    return 0;
}