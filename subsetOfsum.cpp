#include<iostream>
#include<vector>
using namespace std;
 void solve(int arr[],int sum,vector <vector<int>> &ans,vector<int>output,int s,int j){
    if(s==sum){
        ans.push_back(output);
        return ;
    }
     if (s > sum || j >= 6) {
        return;
    }
   solve(arr,sum,ans,output,s,j+1);
   output.push_back(arr[j]);
   solve(arr,sum,ans,output,s+arr[j],j+1);
    
}
int main(){
    int arr[7]={1,2,3,4,5,6};
    int sum=6;
    vector <vector<int>> ans;
    vector<int>output;
    solve(arr,sum,ans,output,0,0);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j <ans[i].size(); j++)
        {
           cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}