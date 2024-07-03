#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        cout << "I am inside default constructor" << endl;
        this->next = NULL;
    }

    Node(int data)
    {
        cout << "I am inside para constructor" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node *head)
{
    // Best Practice
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    // Creation of Node

    Node a;                     // Static Allocation
    Node *first = new Node(10); // Dynamic Allocation
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Linked list create ho chuki h

    Node *head = first;
    cout << "Printing the entire LL: " << endl;
    printLL(head);

    cout << "Length of LL is: " << getLength(head);

    return 0;
}