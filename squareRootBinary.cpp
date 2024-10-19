#include <iostream>
using namespace std;
long long root(long x){
  int ans=-1;
   long s=0;
   long e=x;
   long mid= s+(e-s)/2;
   while(s<=e){
    if(mid==x/mid){
      ans = mid;
       return mid;
    }
      else if(mid<x/mid){
        long ans = mid;
        s=mid+1;
    }
   else if (mid>x/mid){
        e=mid-1;
    }
    mid= s+(e-s)/2;
   }
   return ans;
}
   double sqrRoot(int x, int limit, int tempsol){
    double factor=1;
    double ans = tempsol;
    for(int i=0; i<limit; i++){
      factor = factor/10;
      for (double j=tempsol; j*j<x; j= j+factor){
        ans=j;
      }
    }
       return ans;
   }

int main(){
    long x;
    cout<<"enter a number to find sqaure root\n";
    cin>>x;
    int tempsol=root(x);
    cout<<"the square root of "<<x<<" is "<<sqrRoot(x,5,tempsol);
    return 0;
}