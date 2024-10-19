#include <iostream>
using namespace std;
void sort(int arr[],int n)
{
for (int i = 0; i < n-1; i++)
{
   for(int j =n-1; j>i; j--)
   {
    if (arr[j]<arr[i])
    {
     swap (arr[i],arr[j]);    
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
int main()
{
    int a[5]={25,154,4,56,48};
    sort(a,5);
    print(a,5);
    return 0;
}