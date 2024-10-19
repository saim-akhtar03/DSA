#include<iostream>
#include<string>
using namespace std;

int checkPalindrome(string str){
    int mid=(str.length()-1)/2;
    for (int  i = 0; i < str.length(); i++)
    {
        int j;
        int k=i;
        if(k==0){
     j=str.length()-1;
        }
        else{
            j=k-1;
        }
    
    while(j!=i){
        if(str[k]==str[j]){
            if(k==str.length()-1){
                k=0;
            }
            else{
                k++;
            }
            if(j==0){
                j=str.length()-1;
            }
            else{
                j--;
            }
        if(j==i){
        if(i>mid){
            return str.length()-i;
        }
        else{
            return i;
        }
        }
        }
        else{
        break;
        }
    }
    }
    return -1;
}

int main(){
    string str;
    cin>>str;
    int i= checkPalindrome(str);
    cout<<i;
    return 0;
}