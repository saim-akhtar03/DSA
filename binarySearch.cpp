#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end = size-1;
    int mid =(start+(end-start)/2);
    while (start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if (key>arr[mid]){
            start=mid+1;
        }
       else if(key<arr[mid]){
            end = mid -1;
        }
        mid = (start+(end-start)/2);
    }
    return -1;
};
int main(){
    int a[8]={1,5,7,11,15,20,27,33};
    int b[7]={2,5,11,25,33,77,99};
    int key;
    cout<<"enter key:\n";
    cin>>key;
    cout<<"index of "<<key<<" is "<<binarySearch(a,8,key)<<endl;
    cout<<"index of "<<key<<" is "<<binarySearch(b,7,key);
    return 0;

}