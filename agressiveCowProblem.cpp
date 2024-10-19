#include<bits/stdc++.h>
using  namespace std;
bool cows(int arr[],int n,int m,int mid){
    int cow=1;
  int lastposition=arr[0];
    for (int i = 0; i < n; i++)
    {  
      if(arr[i]-lastposition>=mid){
        cow++;
        if(cow==m){
            return true;
        }
        lastposition = arr[i];
      }
    }
    return false;
}
    int getMax(int arr[],int n){
        int max=INT32_MIN;
        for (int i = 0; i < n; i++)
        {
            if(arr[i+1]>max){
                max=arr[i];
            }
        }
        return max;
        
    }
   
    int allocation(int arr[],int n,int m){
         std::sort(arr, arr + n);
        int s=0;
        int e= getMax(arr,n);
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
        if(cows(arr,n,m,mid)){
            ans=mid; 
            s=mid+1;
            
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
        }
        return ans;
    }

int main(){
    int arr[5]= {4,2,1,3,6};
    cout<<allocation(arr,5,2);
    return 0;
}