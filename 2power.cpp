#include <iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int sum = power(n-1);
    return 2*sum;
}
int main(){
    int n;
    cin>>n;
    cout<<power(n);
    return 0;
}