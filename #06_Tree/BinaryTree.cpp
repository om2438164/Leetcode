#include<iostream>
#include<queue>
using namespace std;

//creation of  binary tree
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(){
        this->left=NULL;
        this->right=NULL;
    }
    Node(int data){
        this->left=NULL;
        this->right=NULL;
        this->data=data;
    }

};

Node* createTree(){
    int data;
    cout<<"Enter the node data"<<endl;
    cin>>data;
    if(data==-1) return NULL;
    Node* newnode=new Node(data);

    //left subtree
    cout<<"left Node of : "<<newnode->data<<endl;
    newnode->left=createTree();

    //right subtree
    cout<<"right Node of : "<<newnode->data<<endl;
    newnode->right=createTree();

    return newnode;
}

//preorder traversal- NLR

void preorder(Node* node){
    if(node==NULL) return;
    //N
    cout<<node->data<<" ";

    //L
    preorder(node->left);
    //R
    preorder(node->right);
}

//Inorder traversal- LNR

void inorder(Node* node){
    if(node==NULL) return;

    //L
    inorder(node->left);
    //N
    cout<<node->data<<" ";
    //R
    inorder(node->right);
}

//Postorder traveral- LRN

void postorder(Node* node){
    if(node==NULL) return;

    //L
    postorder(node->left);

    //R
    postorder(node->right);
    
    //N
    cout<<node->data<<" ";
}

void bfs(Node* node){
    queue<Node*>q;
    q.push(node);

    while(!q.empty()){
        //fetch the first ele
        Node* front=q.front();
        // print or store that ele 
        cout<<front->data<<" ";
        //remove it from queue
        q.pop();

        if(front->left!=NULL) q.push(front->left);
        if(front->right!=NULL) q.push(front->right);
    }
}

int main(){

    Node* root=createTree();
    
    // 1. DFS 
    // preorder(root);
    // inorder(root);
    // postorder(root);

    // 2. BFS/ Level order traversal 
    bfs(root);
    return 0;
}