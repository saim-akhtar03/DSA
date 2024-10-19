#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this-> data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(Node* head){
    Node* temp= head;
    
    if(head==NULL){
        cout<<"linked list is empty\n";
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<endl;
}

 void insertAtHead(Node* &head,Node* &tail,int d){
        Node* temp=new Node(d);
        if(head==NULL){
            head=temp;
            tail=head;
       } 
       else{
       temp->next=head;
       head->prev=temp;
       head=temp;
       }
       
    }
    void insertAtTail(Node* &tail,Node* &head,int d){
        Node* temp=new Node(d);
        if(head==NULL){
            head=temp;
            tail=head;
        }
        else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        }
        
    }
    void insertAtpos(Node* &head,Node* &tail,int d,int pos)
{
    if(pos==1){
        insertAtHead(head,tail,d);
    }
    else{
    Node* temp=head;
    Node* temp2=temp;
    Node* temp3=new Node(d);
    
    for (int i = 1; i <=pos-2; i++)
        {
           temp2=temp2->next;
        }
        temp=temp2->next;
        if(temp2->next==NULL){
           insertAtTail(tail,head,d);
        }
        else{
        temp=temp2->next;
        temp2->next=temp3;
        temp->prev=temp3;
        temp3->next=temp;
        temp3->prev=temp2;
        }
    }
}
    void deleteFromPos(Node* &head,int pos,Node* &tail){
        Node* temp=head;
        Node* temp2=temp;
        if(head==NULL){
            cout<<"linked list is empty\n";
        }
        if(pos==1){
            head=head->next;
            free(temp);
        }
        for (int i = 1; i < pos-1; i++)
        {
           temp2=temp2->next;
        }
        temp=temp2->next;
        if(temp->next==tail){
            temp->next=NULL;
            tail=temp;
        }
        else{
        temp=temp->next;
        temp2->next=temp;
        temp->prev=temp2;
        }

    }
int main(){
    Node* head=NULL;
    Node* tail=head;
    int n,d,p;
   
    while(n!=0){
    cout<<" enter 1 to insert at head\n";
    cout<<" enter 2 to insert at end\n";
    cout<<" enter 3 to insert at position\n";
    cout<<" enter 4 to delete position\n";
    cout<<" enter 5 to traverse linked list\n";
    cout<<" enter 0 to exit\n";
    cin>>n;
    switch(n){
        case 1:
        cout<<"enter data: ";
        cin>>d;
        insertAtHead(head,tail,d);
        break;
        case 2:
        cout<<"enter data: ";
        cin>>d;
        insertAtTail(tail,head,d);
        break;
        case 3:
        cout<<"enter data: ";
        cin>>d;
        cout<<"enter position: ";
        cin>>p;
        insertAtpos(head,tail,d,p);
        break;
        case 4:
        cout<<"enter position: ";
        cin>>p;
        deleteFromPos(head,p,tail);
        break;
        case 5:
        print(head);
        break;
        case 0:
        cout<<"exited! ";
        cout<<"head----> "<<head<<endl;
        cout<<"tail----> "<<tail<<endl;
        break;
        default:
        cout<<"enter correct choice\n";
        break;


    }
    }

    return 0;
}