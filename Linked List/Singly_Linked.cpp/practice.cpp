#include<iostream>

using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){

        this-> data = data;
        this -> next = NULL;
    }


};

void InsertAtHead(Node* &head, int d){

    Node* temp = new Node(d);

    temp ->next = head;
    head = temp;
}

void print( Node* &head){

    Node * temp = head;

    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void InsertAtPosition(Node* &head,int position, int data){

    Node * temp = head;

    int cnt =1;

    while(cnt!=position){
        temp = temp->next;
        cnt++;
    }

    //creating  a node for data

    Node * nodetoinsert = new Node(data);

    nodetoinsert  ->next = temp ->next;

    temp ->next = nodetoinsert;

}



int main(){

    Node *node1 = new Node(6);

    Node *head = node1;

    print (head);

    InsertAtHead(head , 8);

    print(head);







}