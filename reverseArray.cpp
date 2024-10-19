#include <iostream>
using namespace std;
class Saim{
    public:
void reverse(int arr[],int n){
    int start=0;
    int end = n-1;
    while(start<=end){
    swap(arr[start],arr[end]);
    start ++;
    end --;
    }
}
void print(int arr[],int size){
    for ( int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};
int main(){
    int i,size,j;
    int arr[100];
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter the elements in array\n";
    for ( i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    Saim arshad;
   arshad.reverse(arr,size);
   arshad.print(arr,size);
    return 0;
    
}
