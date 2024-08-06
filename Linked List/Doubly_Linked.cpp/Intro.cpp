#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {

        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void InsertHead(int data, Node *&head)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void InsertTail(int data, Node *&tail)
{

    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void InsertAtPosition(Node *&head, int position, int d)
{

    if (position == 1)
    {
        InsertHead(d, head);
        return;
    }

    Node *temp = head;

    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // creating  a node for data

    Node *nodetoinsert = new Node(d);

    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void deleteNode(int position, Node *&head)
{

    if (position == 1)
    {

        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {

        Node *current = head;

        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = current;
            current = current->next;
            cnt++;
        }

        current->prev = NULL;
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main()
{

    Node *head = NULL;

    InsertHead(20, head);
    InsertHead(30, head);
    InsertHead(40, head);
    InsertHead(50, head);

    print(head);

    InsertAtPosition(head, 2, 100);
    InsertAtPosition(head, 1, 0);

    print(head);

    deleteNode(3, head);

    print(head);

    cout << "Lenght of Doubly Linked list is : " << getLength(head) << endl;
    return 0;
}