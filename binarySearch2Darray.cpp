#include<iostream>
using namespace std;
int search(int arr[][3],int key){
    int s=0;
    int e=8;
    while(s<=e){
         int mid = s+(e-s)/2;
        int element =arr[mid/3][mid%3];
        if(element==key){
            return mid;     
        }
        if(element<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
}
int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter key to find ";
    int key;
    cin>>key;
    cout<<search(arr,key);
    return 0;
    
}