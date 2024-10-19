#include <iostream>
using namespace std;
void sort(int arr[],int n)
{
 for (int i = 1; i < n; i++)
 {
    int temp =arr[i];
    int j= i-1;
    while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
         arr[j+1]=temp;
    }
   
 }
 

void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    int arr[5]={5,4,2,3,1};
    sort(arr,5);
    print(arr,5);
    return 0;
}