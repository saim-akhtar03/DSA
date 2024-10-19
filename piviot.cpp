#include<iostream>
using namespace std;
int pivot(int *arr,int n){
    if(n<0){
        return -1;
    }
    if(arr[0]<arr[1]>arr[2]||arr[0]>arr[1]<arr[2]){
        return arr[1];
    }
return pivot(arr+1,n-1);
}
int main(){
    int arr[6]={3,2,6,5,6};
    cout<<pivot(arr,5);
    return 0;
}