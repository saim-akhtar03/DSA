#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool redundent(string &s)
{
    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        char ch =s[i];
        
        if(ch == '(' || ch == '+' ||ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else
        {
            
            if(ch == ')') {
                bool isRedundant = true;
                
                while(st.top() != '(') {
                    char top = st.top();
                    if(top == '+' ||top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop();
                }
                st.pop();
                if(isRedundant == true){
                    return true;
                
                
                }
            }
            
        } 
    }
    return false;
}
int main(){
    string str="(c*(a+b))";

    if(redundent(str)){
        cout<<" redundent";
    }
    else{
        cout<<"not  redundent";
    }
return 0; 

}