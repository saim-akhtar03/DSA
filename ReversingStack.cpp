#include<iostream>
#include<stack>
#include<string>
using namespace std;
void insertAtEnd(stack<char>&s,char ch){
    string str="";
    if(s.empty()){
        s.push(ch);
    }
    else{
        while(!s.empty()){
            str.push_back(s.top());
            s.pop();
        }
        s.push(ch);
        for(int i=str.length()-1;i>=0;i--){
            s.push(str[i]);
        }
    }
}
void reverse(stack <char> &s){
if(s.empty()){
    return;
}
char ch=s.top();
   s.pop();
   reverse(s);
   insertAtEnd(s,ch);
}

void print(stack<char>s){
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}
int main(){
    string str="shinchan";
    stack<char>s;
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }
    print(s);
    reverse(s);
    print(s);

}