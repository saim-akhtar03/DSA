#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
void insertAtTAil(Node* &head,Node* &tail,int data){
    Node* temp=head;
    Node* newNode=new Node(data);
    if(head==NULL){
        head=temp;
        tail=head;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        tail=newNode;
    }

}
Node* merge(Node* &head1,Node* &head2){
       if(head2==NULL){
          return head1;
        }
         else if(head1==NULL){
            return head2;
        }
    Node* prev=NULL;
    Node* curr=NULL;
    Node* temp=NULL;
    Node* temp2=NULL;
    Node*head=NULL;
    if(head1->data<=head2->data){
        prev=head1;
        curr=head1->next;
        temp=head2;
        temp2=head2;
        head=head1;
    }
    else{
        prev=head2;
        curr=head2->next;
        temp=head1;
        temp2=head1;
        head=head2;
    }
    while(curr!=NULL&&temp2!=NULL){
            if((temp->data>=prev->data)&&(temp->data<=curr->data)){
                prev->next=temp;
                temp2=temp->next;
                temp->next=curr;
                prev=temp;
                temp=temp2;
            }
            else {
                prev=curr;
                curr=curr->next;
                if(curr==NULL){
                    prev->next=temp;
                    return head;
                }
            }
    }
    return head;
}

void print(Node* head){
    if(head==NULL){
        cout<<"empty linkedlist ";
    }
    else{
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
}
int main(){
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    Node* head=NULL;
    insertAtHead(head1,2);
    insertAtHead(head1,1);
    insertAtTAil(head1,tail1,5);
    insertAtTAil(head1,tail1,9);
    insertAtTAil(head1,tail1,15);
    insertAtHead(head2,3);
    insertAtHead(head2,0);
    insertAtTAil(head2,tail2,10);
    insertAtTAil(head2,tail2,11);
    insertAtTAil(head2,tail2,13);
    print(head1);
    print(head2);
    head=merge(head1,head2);
    print(head);
    return 0;

}