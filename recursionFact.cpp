#include<iostream>
using namespace std;
int func(int n){
   if (n>1){
    return n*func(n-1);
    }
    else
    return 1;

}
int main(){
    int n=6;
    cout<<func(n);
    return 0;
}