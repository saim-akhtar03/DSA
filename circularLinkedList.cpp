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
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};
void insert(Node* &tail,int element,int d){
     Node* newNode= new Node(d);
    if(tail==NULL){
        newNode->next=newNode;
        tail=newNode;
    }
    else{
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        newNode->next=curr->next;
        curr->next=newNode;
    }

}
void deleteNode(Node* &tail,int element){
    if(tail==NULL){
        cout<<"empty linked list ";
    }
    else{
    Node* prev= tail;
    Node* curr= tail;
    while(prev->next->data!=element){
        prev=prev->next;
    }

    curr=prev->next;
    if(curr==tail){
        prev->next=curr->next;
        tail=prev;
        curr->next=NULL;
        free(curr);
    }
    prev->next=curr->next;
    free(curr);
    }

}
void print(Node* tail){
    Node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
        while(temp!=tail);
}
bool isCircular(Node* tail){
    if(tail==NULL){
    return false;
}
    Node* temp =tail;

    while(temp!=NULL&&temp!=tail){
        temp=temp->next;
        if(temp==tail){
            return true;
            break;
        }
        
            return false;

    }

}
int main(){
Node* tail=NULL;
insert(tail,5,3);
insert(tail,3,5);
insert(tail,5,6);
insert(tail,6,7);
insert(tail,7,8);
deleteNode(tail,5);
print(tail);
cout<<endl;
if(isCircular(tail)){
    cout<<"circular\n";
}
else{
    cout<<"not circular\n";
}
return 0;
}

