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
void deleteFromPos(Node* &head,int pos){
    Node* temp=head;
    Node* prev=temp;
    if(pos==1){
        head=temp->next;
        free(temp);
    }
    for(int i=1;i<pos-2;i++){
        prev=prev->next;
        
    }
    temp=prev->next;
    if(temp->next==NULL){
        prev->next=NULL;
        free(temp);
    }
    else{
    temp->next=temp->next->next;
    }
    
}
void insertAtEnd(Node* &tail,int d){
    Node* temp =new Node(d);
    while(tail->next != NULL){
        tail=tail->next;
    }
    tail->next=temp;
    tail=temp;
    tail->next=NULL;
}
 void insertAtHead(Node* &head,int d){
        Node* temp = new Node(d);
        temp->next=head;
        head=temp;
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
    void  insertAtPos(int pos,int d, Node* head,Node* tail){
    if(pos==1){
        insertAtHead(head,d);
    }
    Node* temp= head;
    
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    if(temp->next==NULL){
        insertAtEnd(tail,d);
    }
    else{
    Node* temp2= new Node(d);
    temp2->next=temp->next;
    temp->next=temp2;
    }
}
void middle(Node* head){
    Node* temp =head;
    while(head!=NULL){
        head=head->next->next;
        temp=temp->next;
       
    }

    cout<<"mid element is--> "<<temp->data<<endl;
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=head;
   insertAtHead(head,12);
   insertAtEnd(tail,20);
   insertAtPos(2,5,head,tail);
   insertAtPos(5,30,head,tail);
   print (head);
   deleteFromPos(head,5);
   print (head);
   cout<<"head--> "<<head->data<<endl;
   cout<<"tail--> "<<tail->data<<endl;
   middle(head);
   return 0;
}