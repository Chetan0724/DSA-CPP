// **Insertion**
// **Insert at any Point**

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        cout << "I am inside def constructor" << endl;
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

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // Empty LL
        // Step 1: Create node
        Node *newNode = new Node(data);

        // Step 2: Update tail
        head = newNode;
        tail = newNode;
    }
    else
    {
        // Non-empty LL
        // Step 1: Create new node
        Node *newNode = new Node(data);
        // Step 2: Tail node to attach karo newNode se
        tail->next = newNode;
        // Step 3: Update tail
        tail = newNode;
    }
}

void insertAtposition(Node *&head, Node *&tail, int data, int position)
{
    // Assumption: Position ki value 1 to length+1
    int length = getLength(head);

    if (position == 1)
    {
        insertAtHead(head, tail, data);
    }
    else if (position == length + 1)
    {
        insertAtTail(head, tail, data);
    }
    else
    {
        // Insert at middle of linked list

        // Step: 1 Create a new Node
        Node *newNode = new Node(data);
        // Step: 2 Traverse prev // curr to position
        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            position--;
            prev = curr;
            curr = curr->next;
        }

        // Step: 3 Attach prev to new Node
        prev->next = newNode;
        // Step: 4 Attach newNode to curr
        newNode->next = curr;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    printLL(head);

    insertAtposition(head, tail, 1000, 4);
    printLL(head);

    return 0;
}

// H.W. --> only prev pointer se karke dekho