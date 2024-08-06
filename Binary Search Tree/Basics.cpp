#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left = NULL;
        this-> right = NULL;
    }

};

void levelordertraversal(Node *root)
{

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}



Node* createBST(Node* root, int data){

    if(root==NULL){
        root= new Node(data);
        return root;
    }

    if(data>root->data){

        root->right = createBST(root->right,data);
    }

    else{
        root->left = createBST(root->left,data);
    }

    return root;
}

void takeinput(Node* &root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = createBST(root, data);
        cin >> data;
    }
}

void inorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}




int main(){

    Node* root = NULL;

    cout << "Enter data for BST" << endl;

    takeinput(root);

    cout<<endl;

    cout << "Level-order traversal:" << endl;
    levelordertraversal(root);

    
    cout<<"Preorder"<<endl;
    preorder(root);

    cout<<endl;

    cout<<"Inorder"<<endl;
    inorder(root);

    cout<<endl;

    cout<<"Postorder"<<endl;
    postorder(root);

    return 0;
}
