#include <iostream>
using namespace std;
string replac(string &str){
    string temp="";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}
int main(){
    string s;
    cout<<"enter string"<<endl;
    getline(cin,s);
    cout<<replac(s);
    return 0;
}