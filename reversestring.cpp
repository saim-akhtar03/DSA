#include<saim.h>
#include<iostream>
#include<string>
using namespace std;
void reverse(string& str,int j){
    int n=str.length()-j-1;
     if (n>j){
        return ;
    }
     swap(str.at(n),str.at(j));
     j--;
     return reverse(str,j);
}
using namespace std;
int main(){
    string str="saim";
    reverse(str,str.length()-1); 
    cout<<str;
    return 0;
}