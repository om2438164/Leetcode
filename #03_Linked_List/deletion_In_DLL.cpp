#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAthead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAttail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtpos(Node* &head,Node*tail,int pos,int data){
    if(pos==1){
        insertAthead(head,tail,data);
        return;
    }
    int len=getlen(head);
    if(pos==len+1){
        insertAttail(head,tail,data);
    }

    // we want to insert at the middle
    Node* temp=new Node(data);
    Node* back=head;
    Node* curr=head;

    // imp - to traverse and put the back and curr 
    while(pos!=1){
        back=curr;
        curr=curr->next;
        pos--;
    }
    back->next=temp;
    curr->prev=temp;
    temp->next=curr;
    temp->prev=back;
}

void deleteAtpos(Node* &head,Node* &tail,int pos){
    if(pos==1){
        // delete from head 
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;

    }
    int len=getlen(head);
    if(pos==len){
        // delete from tail 
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
        return;
    }

    // else delete from the middle 
    Node* curr=head;
    Node* back=head;
    while(pos!=1){
        back=curr;
        curr=curr->next;
        pos--;
    }
    back->next=curr->next;
    back=curr->next;
    back->prev=curr->prev;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;

    // alternate way 
    // curr->prev->next = curr->next;
    // curr->next->prev = curr->prev;

    // curr->next = NULL;
    // curr->prev = NULL;



}

int main(){

    Node* head=NULL;
    Node* tail=NULL;
    insertAthead(head,tail,10);
    insertAthead(head,tail,20);
    insertAthead(head,tail,30);
    insertAttail(head,tail,40);
    insertAttail(head,tail,50);
    print(head);
    cout<<endl;
    
    deleteAtpos(head,tail,3);
    deleteAtpos(head,tail,3);
    print(head);
    cout<<endl;
    return 0;
}