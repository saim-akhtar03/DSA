#include <iostream> 
using namespace std;
int getMax(int num[],int n){
    int max = INT16_MIN;
    for(int i =0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getMin(int arr[],int n){
    int min = INT16_MAX;
    for(int i =0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cout<<"enter the size of array\n";
    cin>>size;
    int arr[100];
    cout<<"enter the elements in array\n";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
   cout<<"maximum value is: "<< getMax(arr,size)<<endl;
   cout<<"the minimmum valus is: "<<getMin(arr,size)<<endl;
    return 0;          
}