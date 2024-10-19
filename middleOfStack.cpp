#include<iostream>
#include<stack>
#include<string>
using namespace std;

char middleOfStack(string str,stack<char>s){
    string temp="";
for (int i = 0; i <str.length(); i++)
{
    s.push(str[i]);
}

for(int i=0;i<str.length()/2+1;i++){
    char ch=s.top();
    temp.push_back(ch);
    s.pop();
}
for(int i=temp.length()-1;i>=0;i--){
    s.push(temp[i]);
}
char mid=temp[temp.length()-1];
return mid;
}

int main(){
stack <char>s;
string str="shinchan";
char mid=middleOfStack(str,s);
cout<<mid;
return 0;
}