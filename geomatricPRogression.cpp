#include<iostream>
using namespace std;
int gp(int x,int n){
    int sum =1;
    int y=1;
    for (int i = 1; i < n; i++)
    {
     y=y*x; 
     sum += y;
    }
    return sum;
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<gp(x,n);
    return 0;
}