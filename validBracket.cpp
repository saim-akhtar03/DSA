#include<iostream>
#include<stack>
#include<string>
using namespace std;

int validate(string str){
    int count=0;
    int count1=0;
    int n=0;
    stack<char>st;
    if(str.length()%2==1){
        return -1;
    }
    else{
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='{'){
            st.push(str[i]);
        }
        else{
         if(!st.empty() && st.top()=='{'){
            st.pop();
 
        }
           else {
            st.push(str[i]);
       
        }
        }
    }
    while(!st.empty()){
      if(st.top()=='{'){
        st.pop();
        count++;
      }
      else{
        st.pop();
        count1++;
      }
    }
     n=(count+1)/2+(count1+1)/2;
    }
    return n;
}

int main(){
    string str;
    cin>>str;
    int x=validate(str);
    cout<<x;
    return 0;
}