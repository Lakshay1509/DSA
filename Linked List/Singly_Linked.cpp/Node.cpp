#include <iostream>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            this ->next = NULL;
        }
    }
};

void InsertHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void deleteNode(int position, Node *&head)
{

    if(position ==1){
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } 

    else{

        Node *current = head;

        Node *prev = NULL;

        int cnt =1;
        while(cnt<position){
            prev = current;
            current = current->next;
            cnt++;
        }

        prev->next = current->next;
        current->next = NULL;
        delete current;

    }
}

void InsertAtPosition(Node *&head, int position, int data)
{

    Node *temp = head;

    int cnt = 1;

    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }

    // creating  a node for data

    Node *nodetoinsert = new Node(data);

    nodetoinsert->next = temp->next;

    temp->next = nodetoinsert;
}

int main()
{
    Node *node1 = new Node(5);

    // head pointed to node1
    Node *head = node1;
    print(head);

    InsertHead(head, 12);

    print(head);

    InsertHead(head, 15);

    print(head);

    InsertAtPosition(head, 4, 30);

    print(head);

    deleteNode(2,head);

    print(head);

    return 0;
}