#include <iostream>
using namespace std;
void swaping(int arr[],int size){
  for (int i = 0; i < 5; i+=2)
    {
        if(i+1<5){
        swap(arr[i],arr[i+1]);
        }
    }
 
};
void print (int arr[],int n){
  for (int i = 0; i < n; i++)
  {
   cout<<arr[i]<<" ";
  }
  
}
int main(){
    int arr[5]={1,2,3,4,5};
   swaping(arr,5);
   print(arr,5);
    return 0;
    
}