#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(string num,string str[],int index,vector <string> &ans,string output){
    if(index>=num.length()){
        ans.push_back(output);
        return;
    }
    int number=num[index]-'0';
    string ch= str[number];
    for (int i = 0; i <=num.length(); i++)
    {
     output.push_back(ch[i]);
       solve(num,str,index+1,ans,output);
       output.pop_back();
    }
  
    
}
int main(){
    string str[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string num="";
    cin>>num;
    vector<string> ans;
    string output="";
    int index=0;
    solve(num,str,index,ans,output);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;


}