#include<iostream>
using namespace std;
void sort(int *arr,int n,int index){
    int min=index;
    if(index==n-1){
        return;
    }
for (int i = min+1; i < n; i++)
{
    if(arr[min]> arr[i]){
     min=i;
    }

}
swap(arr[index],arr[min]);
sort(arr,n,index+1);

}
int main(){
    int arr[7]={2,1,5,3,4,7,6};
    sort(arr,7,0);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}