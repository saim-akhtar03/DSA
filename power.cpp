#include<iostream>
using namespace std;
long pow (int a,int b){
    if(b==0){
        return 1;
    }
   if(b==1){
    return a;
   }
   long ans=pow(a,b/2);
   if(b%2==0){
  return ans*pow(a,b/2); 
   }
   else{
      return a*ans*pow(a,b/2);
   }
 
}
int main(){
    int a,b;
    cin>>a>>b;
    long ans = pow(a,b);
    cout<<"answer is "<<ans;
    return 0;
    }