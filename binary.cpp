#include<iostream>
using namespace std;
bool fun(int arr[],int s,int e,int k){
    int mid=(s+e)/2;
    if(s>e){
        return 0;

    }
    if(arr[mid]==k){
        return 1;
    }
    if(arr[mid]<k){
    return fun(arr,mid+1,e,k);
    }
       if(arr[mid]>k){
    return fun(arr,s,mid-1,k);
    }
};
int main(){
int arr[6]={1,2,3,4,5,6};
if(fun(arr,0,5,8)){
    cout<<"key found";
}
else{
    cout<<"key not found";
}
return 0;
}