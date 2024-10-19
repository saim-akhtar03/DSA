#include<iostream>
using namespace std;
int duplicate(int arr[],int size){
    int num =0;
    for (int i = 0; i < size; i++)
    {
     num=num^arr[i];
        //  }
        //  for (int i = 1; i < size; i++){
        //     num=num^i;
        //  }
         return num;
       
      }
}
      
    
int main(){
    int arr[100];
    int i,size;
    cin>>size;
    for ( i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<duplicate(arr,size);
   return 0;
}