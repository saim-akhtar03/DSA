#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *arr1=new int[l1];
    int *arr2=new int[l2];
    cout<<s<<" "<<e<<" "<<mid<<" "<<l1<<" "<<l2<<endl;
    int k=s;
    for (int i = 0; i < l1; i++)
    {
       arr1[i]=arr[k++];
    }
     k=mid+1;
    for (int i = 0; i < l2; i++)
    {
       arr2[i]=arr[k++];
    }
    int index1=0;
    int index2=0;
     k=s;

    while (index1<l1&&index2<l2)
    {
        if (arr1[index1]<arr2[index2])
        {
            arr[k++]=arr1[index1++];
        }
        else{
            arr[k++]=arr2[index2++];
        }
        
    }
    while (index1<l1){
        arr[k++]=arr1[index1++];
    }
    while (index2<l2){
        arr[k++]=arr2[index2++];
    }
delete []arr1;
delete[]arr2;
    
}
void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid =s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[7]={5,3,2,4,6,7,1};
    int n= 7;
    mergeSort(arr,0,n-1);
    cout<<endl;
    for (int  i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}