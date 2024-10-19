#include<iostream>
using namespace std;
void maxmin(int arr[],int &max,int &min,int s,int e){
    if(s==e){
        max=min=arr[s];
        return;
    }
    if(s==e-1){
   if(arr[s]>arr[e]){
    max=arr[s];
    min=arr[e];
   }
   else{
     max=arr[e];
    min=arr[s];
    }
    return;
    }
       int  mid=s+(e-s)/2;
       int min1,max1;
         maxmin(arr,max1,min1,s,mid);
         maxmin(arr,max,min,mid+1,e);
         
    if(min1<min){
        min=min1;
    }
    if (max1>max){
        max=max1;
    }

}
int main(){
int arr[7]={1,6,76,87,3,0,-45};
int max=arr[0];
int min=arr[6];
maxmin(arr,max,min,0,6);
cout<<max<<" "<<min;
return 0;
}