#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* head;
    Node(int data){
        this ->data = data;
        this ->next=NULL;
    }
};
    void insertAtEnd( Node* &head,  Node* &tail, int val) {
        
        Node* temp = new Node(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
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
    Node* reverse(Node* &head){
        Node* prev=NULL;
        Node* curr=head;
        Node* forword=NULL;

        while(curr!=NULL){
           forword = curr->next;
           curr->next=prev;
           prev=curr;
           curr=forword;

        }
        return prev;
    }
    Node* sum(Node* head,Node* head2){
   Node* temp=reverse(head);
   Node* temp2=reverse(head2);
   Node* head3=NULL;
   Node* tail3=head3;
   int val1=0;
   int val2=0;
   int cary=0;
   while(temp!=NULL||temp2!=NULL||cary!=0){
       val1 = 0;
       val2 = 0;
    if(temp!=NULL){
        val1=temp->data;
    }
     if(temp2!=NULL){
        val2=temp2->data;
    }
    
    int sum=(val1+val2+cary);
    int digit=sum%10;
    insertAtEnd(head3,tail3,digit);
    cary=sum/10;
    if(temp!=NULL){
    temp=temp->next;
    }
    if(temp2!=NULL){
    temp2=temp2->next;
    }
   }
  head3= reverse(head3);
return head3;
    }
    void print(Node* &head){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
 int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = head;

    Node* node2 = new Node(1);
    Node* head2 = node2;
    Node* tail2 = head2;

    insertAtHead(head, tail, 2);
    insertAtEnd(head,tail, 5);
    insertAtEnd(head,tail, 8);
    print(head);

    insertAtHead(head2, tail2, 1);
    insertAtEnd(head2,tail2, 5);
    insertAtEnd(head2,tail2, 7);
    print(head2);

    Node* add = sum(head, head2);
    print(add);
}