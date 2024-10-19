#include <iostream>
using namespace std;
void sort(int arr[],int n){
    int left =0;
    int right = n-1;
    while(left<right){
    while(arr[left]==0 && left<right){

        left++;
    }
    while (arr[right]==1 && right > left)
    {
        right--;
    }
    if(left<right){
        swap(arr[left],arr[right]);
    }
    }
};
    void print(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
        
    }
    
int main(){
    int arr[8]={0,0,0,1,1,1,0,1};
    sort(arr,8);
    print(arr,8);
    return 0;
}