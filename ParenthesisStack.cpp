#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool matched(stack<char>s,char ch){
    if(s.top()=='{'&&ch=='}'){
        return true;
    }
    else if(s.top()=='['&&ch==']'){
        return true;
    }
    else if(s.top()=='('&&ch==')'){
        return true;
    }
    return false;
}
bool isParenthesis(stack<char>s,string str){
        for(int i=0;i<str.length();i++){
        if(str[i]=='{'||str[i]=='('||str[i]=='['){
            s.push(str[i]);
        }
        else{
            if(!s.empty()){
             if(matched(s,str[i])){
                s.pop();
            }
            else{
                return false;
            }
            }
        }
    }
    if(s.empty()){
        return true;
    }
    return false;
}
int main(){
    stack<char>s;
    string str;
    cin>>str;
    bool b=isParenthesis(s,str);
    if(b){
        cout<<"given string is parenthesis ";
    }
    else{
        cout<<"given string is not parenthesis ";
    }

}