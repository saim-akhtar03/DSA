#include <iostream>
#include<string>
using namespace std;

char heighestOccCharacter(string str){
    int arr[26]={0};
    for (int i = 0; i < str.length(); i++)
    {
        int number =0;
        char ch = str[i]; 
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
    arr[number]++;

    }
    int max=-1,ans=0;
    for (int i = 0;i< 26; i++)
    {
        if(arr[i]>max){
            ans = i;
           max=arr[i];
        }
        
    }
    char temp= ans+'a';
    return temp;
    
}
int main(){
    string s;
    cin>>s;
    cout<<heighestOccCharacter(s);
    return 0;
}