#include<iostream>
using namespace std;
void sort(int *arr,int n ){
    int  =arr[n-1];
    int j=n-2;
    if(n<=1){
        return;
    }
while(j>=0&&arr[j]>last){
    arr[j+1]=arr[j];
    j--;
}
arr[j+1]=last;
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