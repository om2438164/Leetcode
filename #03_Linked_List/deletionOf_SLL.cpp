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

int getlen(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
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

void deleteAtpos(Node* &head,Node* &tail,int pos){
    // if we want to delete first element head 
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }

    // if we want to delete last element which is tail 
    int len=getlen(head);
    if(pos==len){
        Node* prev=head;
        while(prev->next!=tail){
            prev=prev->next;
        }
        prev->next=NULL;
        delete tail;
        tail=prev;
        return;
    }


    // if there is only single node present 
    // then we have to delete that node and assign head and tail to NULL
    if(head==tail){
        Node* temp=head;
        delete head;
        delete tail;
        head=NULL;
        tail=NULL;
    }

    // when the position is in the middle or we want to delete the element form the middle 
    // important to place prev and curr 
    Node* curr=head;
    Node* prev=head;
    while(pos!=1){
        prev=curr;
        curr=curr->next;
        pos--;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

}


int main()
{
   
    // standard formate
    Node* head=NULL;
    Node* tail=NULL;
    insertAthead(head,tail,10);
    insertAthead(head,tail,20);
    insertAttail(head,tail,30);
    insertAttail(head,tail,40);
    insertAttail(head,tail,50);

    
    print(head);
    cout<<endl;
    deleteAtpos(head,tail,3);
    print(head);
    
    return 0;
}