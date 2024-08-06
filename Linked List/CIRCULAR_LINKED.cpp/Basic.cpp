#include<iostream>
#include<map>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int d)
    {

        this->data = d;
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


void InsertNode(Node* &tail, int element, int d)
{
    if(tail==NULL){
        Node *newNode = new Node(d);
        tail=newNode;
        newNode->next = newNode;
    }

    else{

        Node *curr = tail;

        while(curr->data!=element){
            curr = curr->next;
        }

        Node *newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;

    }

}

void print(Node *tail){

    Node *temp = tail;

    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);

    cout<<endl;
}


void deleteNode(Node * &tail,int value){

    if(tail==NULL){
        cout<<"List is empty"<<endl;
    }

    else{

        Node *prev = tail;
        Node *curr = prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        //1 Node Linked List
        if(curr==prev){
            tail=NULL;
        }

        //>2 Node linked list
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;

    }
}


bool detectloop(Node*head){

    if(head==NULL){
        return false;
    }

    map<Node*,bool> visited;

    Node*temp = head;

    while(temp!=NULL){

        if(visited[temp] == true){

            return true;


        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;


}

Node *floydDetectLoop(Node* head){

    if(head==NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){

        fast= fast->next;

        if(fast!=NULL){
            fast= fast->next;
        }

        slow = slow->next;

        if(slow==fast){
            return slow;
        }
    }

    return NULL;

}

Node *getStartingNode(Node* head){

    if(head==NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow!= intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;

}

void removeloop(Node*head){

    if(head==NULL){
        return;
    }

    Node*startofloop = getStartingNode(head);
    Node*temp = startofloop;
    while(temp->next!=startofloop ){
        temp = temp->next;
    }
    temp -> next = NULL;

}



int main(){

    Node *tail = NULL;

    InsertNode(tail,10,3);

    InsertNode(tail,3,10);

    InsertNode(tail,10,5);

    print(tail);

    deleteNode(tail,3);

    print(tail);

    

    return 0;
}