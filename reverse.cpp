#include <iostream>
#include<string.h>
using namespace std;
bool valid(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='B')||(ch>='0'&&ch<='9')){
        return 1;
    }
        else{
            return 0;
        }
    }
    char converter(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
    ch= ch - 'A'+'a';
     return ch;
    }
   
}
    reverse(string str,int n){
      string temp="";
    for (int i = 0; i < str.length(); i++)
    {
         if(valid(str[i])){
            temp.push_back(str[i]);
        
         }
    }
      int s=0;
      int e= temp.length()-1 ;
     while (s<e){
        swap(temp[s],temp[e]); 
        s++;
        e--;
     }
    cout<<temp;
    }
 bool palindrom(string str,int n)
{
    string temp = "";
     for (int i = 0; i < str.length(); i++)
    {
         if(valid(str[i])){
            temp.push_back(str[i]);
         }
    }
    int s=0;
    int e=temp.length()-1;
    while(s<e){
        if(converter(temp[s])!=converter(temp[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}
int main(){
    string str ;
    cout<<"Enter your name : \n";
    cin>>str;
    int len = str.length();
    cout<<len<<endl;
    cout<<"your name is ";
    reverse(str,len);
    cout<<" ";
    cout<<"and it is palindrom or not = "<<palindrom(str,len);
    return 0;
    } 