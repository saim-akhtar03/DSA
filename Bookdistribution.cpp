#include <iostream>
using namespace std;
bool possible(int arr[],int n,int m,int mid){
    int student =1;
    int pagesum =0;
    for (int i = 0; i < n; i++)
    {
      if(pagesum+arr[i]<=mid)
      {
       pagesum += arr[i];
      }
      else{
         student++;
        if(student>m || arr[i]>mid){
        return false;
        }
        pagesum =arr[i]; 
       
      }
      
    }
    return true;
}
int allocatebook(int arr[],int n,int m){
    int s=0;
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
       int e = sum;
       int mid = s+(e-s)/2;
       int ans=-1;
    
    while(s<=e){
    if(possible(arr,n,m,mid)){
    ans = mid;
    e = mid-1;
    }
    else{
        s = mid +1;
    }
    mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n,m;
    cout<<"enter number of books\n";
    cin>>n;
    int arr[100];
  for (int i = 0; i <n; i++)
  {
   cin>>arr[i];
  }
  
  cout<<"eneter number of students to distributes pages\n";
  cin>>m;
  cout<<"the minimum sum of number of pages distributed to a student is: "<< allocatebook(arr,n,m);

    return 0;
} 