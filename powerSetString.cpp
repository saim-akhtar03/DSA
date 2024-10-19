#include<iostream>
#include<string>
#include<vector>
using namespace std;
void power(string s,string output,vector<string> &ans,int index){
if(index==s.length()){
    ans.push_back(output);
    return;
}
power(s,output,ans,index+1);
char ch =s[index];
output.push_back(ch);
power(s,output,ans,index+1);

}
int main(){
    string s="abc";
    string output="";
    vector<string> ans;
    power(s,output,ans,0);
    for (int i = 0; i < ans.size(); i++)
    {
       cout<<ans.at(i)<<" ";
    }
    return 0;
}
