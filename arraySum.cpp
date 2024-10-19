#include <iostream>
using namespace std;
int getSum(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
     sum =sum+arr[i];
    }
    return sum;
}
int main()
{
    int arr[100],size,i;
    cout<<"enter the size of array\n";
    cin>>size;
    cout<<"enter the elements in array\n";
    for ( i = 0; i < size; i++)
    {
      cin>>arr[i];
    }
    cout<<"the sum is: "<<getSum(arr,size);
    
return 0;
}