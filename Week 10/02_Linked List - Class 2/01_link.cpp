// **Deletion**

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

    ~Node()
    {
        cout << "Destructor called for: " << this->data << endl;
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

void deleteNode(Node *&head, Node *&tail, int position)
{
    // empty list
    if (head == NULL)
    {
        cout << "Cannot delete, coz LL is empty" << endl;
        return;
    }

    if (head == tail)
    {
        // single element
        Node *temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }

    int len = getLength(head);

    // delete from head

    if (position == 1)
    {
        // first node ko delete kardo
        Node *temp = head;
        head = head->next;
        // head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else if (position == len)
    {
        // last node ko delete kardo

        // find prev

        Node *prev = head;
        while (prev->next != tail)
        {
            prev = prev->next;
        }

        // prev node ka link null karo
        prev->next = NULL;

        // node delete karo
        delete tail;

        // update tail
        tail = prev;
    }
    else
    {
        // middle me koi node ko delete karna h

        // step 1: set prev/curr pointers
        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            position--;
            prev = curr;
            curr = curr->next;
        }

        // step 2: prev->next me curr ka next node add karo
        prev->next = curr->next;

        // step 3: node isolate karo
        curr->next = NULL;

        // step 4:delete Node
        delete curr;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    printLL(head);
    deleteNode(head, tail, 1);
    printLL(head);

    return 0;
}