#include <iostream>
using namespace std;
int  leftSorting(int arr[],int size,int key){
    int ans=-1;
    int start=0;
    int end= size-1;
    int mid=(start+(end-start)/2);
    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
         else if(key<arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
         mid=(start+(end-start)/2);
    }
     return ans;
};
   
    int  rightSorting(int arr[],int size,int key){
    int ans=-1;
    int start=0;
    int end= size-1;
    int mid=(start+(end-start)/2);
    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
         mid=(start+(end-start)/2);
    }
    return ans;
};
int main(){
    int n;
    int a[8]={1,1,2,2,5,6,7,8};
    cout<<"enter a key\n";
    cin>>n;
    cout<<"key at left most side = "<<leftSorting(a,8,n)<<endl;
    cout<<"key at right most side = "<<rightSorting(a,8,n)<<endl;
    cout<<"number of occurence is "<<rightSorting(a,8,n)-leftSorting(a,8,n)+1;
    return 0;
}