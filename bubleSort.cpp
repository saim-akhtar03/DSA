#include<iostream>
using namespace std;
void sort(int *arr,int n ){
    if(n==0||n==1){
        return;
    }
for (int i = 0; i < n; i++)
{
    if(arr[i]> arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
}
sort(arr,n-1);

}
int main(){
    int arr[7]={2,1,5,3,4,7,6};
    sort(arr,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}