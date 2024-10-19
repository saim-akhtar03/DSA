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
void print(Node* head){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
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

Node* merge(Node* left,Node* right){
    cout<<"left-> "<<left->data<<" "<<"right-> "<<right->data<<endl;
       if(right==NULL){
          return left;
        }
         else if(left==NULL){
            return right;
        }
  Node* ans=new Node(-1);
  Node* temp=ans;
  while(left!=NULL&&right!=NULL){
  if(left->data<right->data){
    temp->next=left;
    temp=left;
    left=left->next;
    
  }
  else{
    temp->next=right;
    temp=right;
    right=right->next;
  }
  }
  while(left!=NULL){
    temp->next=left;
    temp=left;
    left=left->next;
  }
  while (right!=NULL)
  {
    temp->next=right;
    temp=right;
    right=right->next;
  }
  ans=ans->next;
  print(ans);
  return ans;
  
}


Node* middle(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }



Node* mergeSort(Node* head){
    if(head==NULL||head->next==NULL){
      return head;
    }
    Node* mid=middle(head);
    Node* left=head;
    Node* right=mid->next;
    mid->next=NULL;
    cout<<"mid-> "<<mid->data<<endl;
    left=mergeSort(left);
    right=mergeSort(right);
    Node* result=merge(left,right);
    return result;
}

    int main(){
    Node* head1=NULL;
    Node* tail1=NULL;
    insertAtTAil(head1,tail1,15);
    insertAtHead(head1,tail1,1);
    insertAtTAil(head1,tail1,9);
    insertAtTAil(head1,tail1,5);
    insertAtHead(head1,tail1,2);
    insertAtHead(head1,tail1,0);
    insertAtHead(head1,tail1,12);  
    print(head1);
    Node* head2=mergeSort(head1);
    print (head2);
    return 0;
}