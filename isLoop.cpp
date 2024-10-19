#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
    void insertAtHead(Node* &head,int d){
      
        Node* temp = new Node(d);
          if(head==NULL){
            head=temp;
        }
        else{
        temp->next=head;
        head=temp;
        }
    }
   void insertAtEnd(Node* &tail,Node*head,int d){
    Node* temp =new Node(d);
    Node* temp2=head;
    if(tail==head){
        head->next=temp;
        tail=temp;
    }
    while(temp2->next != NULL){
        temp2=temp2->next;
    }
    temp2->next=temp;
    tail=temp;
    tail->next=NULL;
} 
Node* isLoop(Node* head){
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL&&slow!=NULL){
        fast=fast->next->next;
        slow =slow->next;
        if(slow==fast){
                return slow;
        }
        }

    return NULL;
}
Node* loopNode(Node* &head){
    Node* cross = isLoop(head);
    Node* slow=head;
    if(cross!=NULL){
    while(slow!=cross){
        slow=slow->next;
        cross=cross->next;
    }
    return cross;
    }
    return NULL;
}
Node* removeloopNode(Node* &head){
    Node* cross = isLoop(head);
    Node* slow=head;
    Node* temp=NULL;
    if(cross!=NULL){
    while(slow!=cross){
        slow=slow->next;
        temp=cross;
        cross=cross->next;
    }
    temp->next=NULL;
    cout<<"loop removed\n";
    return cross;
    }
    return NULL;
}
//         return false;
//      }
// Node* slow= head;
// Node* fast = head;
// while(fast!=NULL){
//     fast=fast->next->next;
//     slow=slow->next;
//     if(fast==slow){
//         return true;
//     }
// }
//   return false;
// }
// bool isLoop(Node* head){
//     if(head==NULL){
//         return false;
//     }
//     Node* temp=head;
//     map<Node*,bool>visited;
//     while(temp!=NULL){
//     if(visited[temp]==true){
//         cout<<"loop present on element---> "<<temp->data<<endl;
//         return true;
//     }
//         visited[temp]=true;
//         temp=temp->next;
//     }
//     return false;
// }
void print(Node* head){
        while (head!=NULL)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,1);
    insertAtEnd(tail,head,3);
    insertAtEnd(tail,head,4);
    insertAtEnd(tail,head,5);
    insertAtEnd(tail,head,6);
    insertAtEnd(tail,head,7);
    tail->next= head->next->next;
     
  if(isLoop(head)!=NULL){
   Node* cross=loopNode(head);
    cout<<"loop present from "<<cross->data<<endl;

  }
  else{
    cout<<"loop not present\n";
  }
removeloopNode(head);
print(head);
return 0;
}