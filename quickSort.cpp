#include<iostream>
using namespace std;
int partition(int *arr,int s,int e){
    int count=0;
    for (int i = 0; i <= e; i++)
    {
       if(arr[i]<arr[s]){
        count++;
       }
    }
    swap(arr[s],arr[count]);
    while(s<e){
        if(arr[e]<arr[count]){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else{
            e--;
        }
    }
    return count;
    
}
void quickSort(int *arr,int s,int e)
{
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

}
int main(){
    int arr[10]={5,3,4,7,1,2,6,9,8,7
    .};
    int n=10;
    quickSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}