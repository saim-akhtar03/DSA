#include<iostream>
#include<string>
#include<vector>
using namespace std;
void pnc(vector <char>str,int index,vector<vector<char>>& ans){
    if(index>=str.size()){
        ans.push_back(str);
        return;
    }
    
    for(int i=index;i<str.size();i++){
        swap(str.at(i),str.at(index));
        pnc(str,index+1,ans);
        swap(str.at(i),str.at(index));
    }
}

int main(){
   vector<char> str;
   int n;
   cout<<"enter size of string\n";
   cin>>n;
   cout<<"enter string\n";
     for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        str.push_back(c);
    }
   
    int index=0;

   vector<vector<char>> ans;
    pnc(str,index,ans);
    for (int i = 0; i < ans.size(); i++)
    {
    for (int j = 0; j < ans[i].size(); j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}