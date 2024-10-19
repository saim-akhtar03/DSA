#include<iostream>
using namespace std;
string  abc(string str,string part){
    while(str.length()!=0&&str.find(part)<str.length()){
        str.erase(str.find(part),part.length());
    }
    return str;
}
int main(){
    string s;
    string part;
    cout<<"enter string\n";
    cin>>s;
    cout<<"enter part to delete\n";
    cin>>part;
    cout<<abc(s,part);
    return 0;
}