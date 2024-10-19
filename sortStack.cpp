#include<iostream>
#include<stack>
#include<string>
#include<saim.h>
#include<vector>
using namespace std;
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void sorted(stack<int>&s,int num){
if(s.empty()||num>=s.top()&&!s.empty()){
    s.push(num);
    return;
}
    int n=s.top();
    s.pop();
    sorted(s,num);
    s.push(n);
}
void sort(stack<int>&s){
    if(s.empty()){
        return;
    }
    int num=s.top();
    s.pop();
  sort(s);
  sorted(s,num);
}

int main(){
    stack <int> s;
    vector<int>v;
    s.push(5);
    s.push(9);
    s.push(-6);
    s.push(-2);
    s.push(7);
    print(s);    
    sort(s);
    print(s);
    return 0;

}