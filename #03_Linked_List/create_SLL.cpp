#include <iostream>
using namespace std;
// creation of node
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


void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

void insertAthead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }else{
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }
}

void insertAttail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }else{
        Node* temp=new Node(data);
        tail->next=temp;
        tail=temp;
    }
}

void insertAtpos(Node* &head,Node* &tail,int pos,int data){
    Node* temp=new Node(data);
    Node* prev=head;
    Node* curr=NULL;
    while(pos!=2){
        prev=prev->next;
        pos--;
    }
    curr=prev->next;
    //do operation of insert
    prev->next=temp;
    temp->next=curr;

}


int main()
{
    // direct creation
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third= new Node(30);
    // Node* fourth = new Node(40);
    // Node* head=first;

    // first->next=second;
    // second->next=third;
    // third->next=fourth;

    // print(head);


    // standard formate
    Node* head=NULL;
    Node* tail=NULL;
    insertAthead(head,tail,10);
    insertAthead(head,tail,20);
    insertAttail(head,tail,30);
    insertAttail(head,tail,40);
    insertAttail(head,tail,50);
    


    //insert at specific position
    insertAtpos(head,tail,4,100);
    print(head);


    return 0;
}