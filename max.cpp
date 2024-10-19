#include <iostream>
using namespace std; 
int getMax(int arr[],int n){
int max= INT32_MIN;
for(int i=0;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
return max;
}
int main()
{
int arr[100],i,size;
cout<<"enter the size of array\n";
cin>>size;
cout<<"enter the elements in array\n";
for(i=0;i<size;i++)
{
    cin>>arr[i];
}
arr[0]=126;
cout<<"the maximum value is: "<<getMax(arr,size);
return 0;
}