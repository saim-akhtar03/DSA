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
void insertAtHead(Node*& head, Node*& tail, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
    if (!tail) {
        tail = temp;
    }
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
        insertAtHead(head,tail,d);
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
Node* reverse(Node* head, int k) {
    if (head==NULL){ return NULL;}

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL) {
        head->next = reverse(next, k);
    }

    return prev;
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=head;
   insertAtHead(head,tail,12);
   insertAtEnd(tail,20);
   insertAtPos(2,5,head,tail);
   insertAtPos(5,30,head,tail);
   print (head);
   deleteFromPos(head,5);
   print (head);
   cout<<"head--> "<<head->data<<endl;
   cout<<"tail--> "<<tail->data<<endl;
   middle(head);
  head= reverse(head,2);
   print(head);
   return 0;
}