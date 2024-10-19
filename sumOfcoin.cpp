#include<iostream>
#include<vector>
using namespace std;
void solve(vector<vector<int>>&v,int n,int i,int sum,int coin[],vector<int>a){
    if(sum==0){
v.push_back(a);
    return;
    }
    else if(sum<0||i>=n){
        a.clear();
       return;
    }
  a.push_back(coin[i]);
 
  solve(v,n,i,sum-coin[i],coin,a);
  a.pop_back();
  solve(v,n,i+1,sum,coin,a);
}

int main(){
    int coin[3]={1,2,3};
    int sum;
    cin>>sum;
    vector<vector<int>>v;
    vector<int> a;

    solve(v,3,0,sum,coin,a);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }    
        cout << endl;
    }

}