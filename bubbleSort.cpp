#include <iostream> 
using namespace std;
void sort(int arr[],int n)
{
 for (int i = n; i >1 ; i--)
 {
   for(int j=0; j<i-1; j++)
    {
     if (arr[j]>arr[j+1])
     {
        swap(arr[j],arr[j+1]);
     }
     
    }
 }
 
}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int a[8]={4,7,5,23,6,1,2,3};
    sort (a,8);
    print (a,8);
    return 0;
}