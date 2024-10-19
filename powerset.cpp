#include<iostream>
#include<vector>
using namespace std;
void subset(vector <int> arr,int n,int i,vector <int> output,vector<vector <int>> &ans){
    if(i==n){
        ans.push_back(output);
        return;
    }
    subset(arr,n,i+1,output,ans);
    int e =arr[i];
    output.push_back(e);
    subset(arr,n,i+1,output,ans);
}
int main(){
   vector <int> arr={1,2,3};
   vector<vector<int>>ans;
   vector<int> output;
    subset(arr,arr.size(),0,output,ans);
for (int i = 0; i < ans.size(); i++)
{
cout<<"[";

    for(int j=0; j<ans[i].size();j++){
        cout<<ans[i][j]<<",";
    }

    cout<<"]";
    cout<<endl;
}

    return 0;
    }