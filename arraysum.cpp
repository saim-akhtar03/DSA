#include<iostream>
using namespace std;
int sum(int arr[],int n){
    if(n<=0){
        return 0;
    }
    int ans= (arr[0 ]+sum(arr+1,n-1));
    return ans;
}
int main(){
    int atr[5]={1,2,3,4,5};
    cout<<sum(atr,5);
    return 0;
}
