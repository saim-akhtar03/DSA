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
void sort(Node* &head){
    Node* zero= new Node(-1);
    Node* one = new Node(-1);
    Node* two = new Node(-1);
    Node* zerotail=zero;
    Node* onetail =one;
    Node* twotail =two;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            if(zero==NULL){
                zero=temp;
                zerotail=zero;
            }
            else{
                zerotail->next=temp;
                zerotail=temp;
            }
        }
         if(temp->data==1){
            if(one==NULL){
                one=temp;
                onetail=one;
            }
            else{
                onetail->next=temp;
                onetail=temp;
            }
        }
         if(temp->data==2){
            if(two==NULL){
                two=temp;
                twotail=two;
            }
            else{
                twotail->next=temp;
                twotail=temp;
            }
        }
        temp=temp->next;
    }
if(one->next!=NULL){
head=zero->next;
zerotail->next=one->next;
onetail->next=two->next;
twotail->next=NULL;
}
else {
head=zero->next;
zerotail->next=two->next;
twotail->next=NULL;
}
delete(zero);
delete (one);
delete (two);


}
// void sort(Node* &head){
//     Node* temp=head;
//     Node* temp2=head;
//     int zero=0;
//     int one=0;
//     int two=0;
//       if(head==NULL){
//         cout<<"empty linkedlist ";
//     }
//     else{
//         while(temp!=NULL){
//             if(temp->data==0){
//                 zero++;
//             }
//             else if(temp->data==1){
//                 one++;
//             }
//             else if(temp->data==2){
//                 two++;
//             }
//             temp=temp->next;
//         }
//     }
//     while(temp2!=NULL){
//         if(zero!=0){
//             temp2->data=0;
//             zero--;
//         }
//           else if(one!=0){
//             temp2->data=1;
//             one--;
//         }
//          else if(two!=0){
//             temp2->data=2;
//             two--;
//         }
//         temp2=temp2->next;
//     }

// }
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
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,0);
    insertAtHead(head,0);
    insertAtHead(head,1);
    insertAtHead(head,2);
    print(head);
    sort(head);
    print(head);
    return 0;

}