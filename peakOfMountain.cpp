#include <iostream>
using namespace std;
int sorting(int arr[],int size){
    int start=0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
         if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        if(arr[mid]>arr[mid+1]){
            end=mid-1;
        }
       mid = start + (end-start)/2;
    }
}
int main(){
    int a[8]={1,2,3,4,5,4,3,1};
    cout<<sorting(a,8);
    return 0;
}