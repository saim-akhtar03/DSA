#include<saim.h>
#include<iostream>
#include<string>
using namespace std;
bool reverse(string& str,int j){
    int n=str.length()-j-1;
     if (n>j){
        return 1 ;
    }
     if (str.at(n)==str.at(j)){
     j--;
     return reverse(str,j);
      
     }
return 0;
}
using namespace std;
int main(){
    string str="saim";
   cout<< reverse(str,str.length()-1); 
    return 0;
}