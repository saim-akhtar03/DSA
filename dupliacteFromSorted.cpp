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
Node* removeDuplicate(Node* &head){
    Node* curr=head;
    while(curr!=NULL){
        Node* curr2=curr->next;
        Node* prev=curr;
        while(curr2!=NULL){
            if(curr->data==curr2->data){
            Node* toDelete=curr2;
            prev->next=curr2->next;
            curr2=curr2->next;
            delete(toDelete);
        }
        else{
        prev=curr2;
        curr2=curr2->next;
        }
        }
        
        curr=curr->next;
    }
    return head;
}
bool isCircular(Node* head){
    if(head==NULL){
    return false;
}
    Node* temp =head;

    while(temp!=NULL){
        temp=temp->next;
        if(temp==head){
            return true;
            break;
        }
        
            return false;

    }

}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=head;
    insertAtHead(head,12);
    insertAtEnd(tail,20);
    insertAtPos(2,5,head,tail);
    insertAtPos(3,30,head,tail);
    insertAtPos(2,30,head,tail);
     insertAtPos(3,5,head,tail);
     insertAtPos(3,35,head,tail);
    insertAtPos(3,30,head,tail);
    insertAtHead(head,13);
    insertAtHead(head,12);
    insertAtEnd(tail,10);
   print (head);
   print (head);
   cout<<"head--> "<<head->data<<endl;
   cout<<"tail--> "<<tail->data<<endl;
   if(isCircular(tail)){
    cout<<"circular\n";
}
else{
    cout<<"not circular\n";
}
head=removeDuplicate(head);
print(head);
   return 0;
}