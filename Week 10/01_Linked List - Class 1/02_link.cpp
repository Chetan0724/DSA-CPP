// **Insertion**
// **Insert at Head**

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->next = NULL;
    }

    Node(int data)
    {
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

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // Empty LL
        // Step 1 : Create new node
        Node *newNode = new Node(data);
        // Step 2 : Update head
        head = newNode;
        tail = newNode;
    }

    else
    {
        // Non-empty LL case
        // Create a new node
        Node *newNode = new Node(data);
        // Attach new node to head node
        newNode->next = head;
        // update head
        head = newNode;
    }
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node *head = first;
    Node *tail = NULL;

    cout << "Printing the entire LL: " << endl;
    printLL(head);

    insertAtHead(head, tail, 500);

    cout << "Printing the entire LL after Insertion: " << endl;
    printLL(head);

    return 0;
}