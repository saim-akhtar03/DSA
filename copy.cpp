#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* random;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->random=NULL;
    }
};
 void insertAtHead(Node* &head,Node* &tail,int d){
        Node* temp = new Node(d);
        if(head==NULL){
            head=temp;
            tail=head;
        }
        else{
        temp->next=head;
        head=temp;
        }
 }
    void insertAtTAil(Node* &head,Node* &tail,int data){
    Node* temp=new Node(data);
    if(tail==NULL){
        head=temp;
        tail=head;
    }
    else{
        tail->next=temp;
        tail=temp;
           
        }
}
Node* copy(Node* head){
    Node* head2=NULL;
    Node* tail2=NULL;
    while(head!=NULL){
insertAtTAil(head2,tail2,head->data);
        head=head->next;
    }
    return head2;
}


Node* copyRandom(Node* head1){
    Node* cloneNode=copy(head1);
    Node* cloneHead=cloneNode;
    Node* originalNode=head1;
    Node* temp=originalNode;
    Node* next1=NULL;
    while(originalNode!=NULL&&cloneHead!=NULL){
  next1=originalNode->next;
  originalNode->next=cloneHead;
  originalNode=next1;

  next1=cloneHead->next;
  cloneHead->next=originalNode;
  cloneHead=next1;   

    }
    temp=head1;
while(temp!=NULL){
    if(temp->next!=NULL){
       temp->next->random=temp->random ? temp->random->next : temp->random;
    }
       temp = temp->next ? temp->next->next : temp->next;
}
cloneHead =cloneNode;
originalNode=head1;
while(cloneHead!=NULL&&originalNode!=NULL){
    originalNode->next=cloneHead->next;
    originalNode=originalNode->next;
if(originalNode!=NULL){
    cloneHead->next=originalNode->next;
}
    cloneHead=cloneHead->next;
}
    return cloneNode;
}


    void print(Node* head){
    if(head==NULL){
        cout<<"empty linkedlist ";
    }
    else{
        while(head!=NULL){
            cout<<"data-> "<<head->data<<" ";
            cout<<"random-> "<<head->random->data<<", ";
            head=head->next;
        }
        cout<<endl;
    }
}
int main(){
    Node* head1=NULL;
    Node* tail1=NULL;
    insertAtHead(head1,tail1,2);
    insertAtHead(head1,tail1,1);
    insertAtTAil(head1,tail1,5);
    insertAtTAil(head1,tail1,9);
    insertAtTAil(head1,tail1,15);
//     insertAtHead(head2,tail2,3);
//     insertAtHead(head2,tail2,0);
//     insertAtTAil(head2,tail2,10);
//     insertAtTAil(head2,tail2,11);
//     insertAtTAil(head2,tail2,13);
// //random pointer
head1->random=head1->next->next;
head1->next->random=head1;
head1->next->next->random=tail1;
head1->next->next->next->random=head1->next->next;
tail1->random=head1->next;
//random ends
    print(head1);
    Node* a=copyRandom(head1);
    print(a);
    return 0;
}