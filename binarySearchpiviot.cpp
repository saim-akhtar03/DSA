#include <iostream>
using namespace std;
int getPivot(int a[],int size){
    int s=0;
    int e= size-1;
    int mid = s +(e-s)/2;
    while(s<e){
        if (a[mid]>=a[0]){
            s=mid+1;
        }
        else{
            e=mid; 
        }
        mid = s +(e-s)/2;
    }
    return s;
}
int binarySearch(int a[],int s,int e,int key){
   
    int mid = s+(e-s)/2;
    while(s<=e){
        if(a[mid] ==key){
            return mid;
        }
        if (a[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }

}
int findPosition(int a[],int size,int key){
    int piviot=getPivot(a,8);
    cout<<piviot;
    if(key>=piviot&&key<a[size-1]){
        return binarySearch(a,piviot,size-1,key);
    }
    else{
        return binarySearch(a,0,piviot,key);
    }
}
int main(){
int arr[8]={3,8,10,17,1,2,5,7};
cout<<findPosition(arr,8,17);
return 0;
}