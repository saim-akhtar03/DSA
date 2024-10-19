#include<iostream>
using namespace std;
bool sumSubSet(int a[],int n,int sum,bool b[][8]){
    if(sum==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(a[n-1]>sum){
        return (b[n][sum]=sumSubSet(a,n-1,sum,b));
    }
    else{
        
        return((b[n][sum]=sumSubSet(a,n-1,sum,b))||(b[n][sum]=sumSubSet(a,n-1,sum-a[n-1],b)));
    }
}
int main(){
    int a[6]={1,2,3,4,5,6};
    int sum=7;
    bool b[7][8];
    for(int i=0;i<=6;i++){
        for (int j = 1; j <= sum; j++)
        {
            b[i][j]=false;
        }
        
    }
    for (int i = 0; i <= 6; i++) {
    b[i][0] = true;
}
     sumSubSet(a,6,sum,b);
      for(int i=0;i<=6;i++){
        for (int j = 0; j <= sum; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}