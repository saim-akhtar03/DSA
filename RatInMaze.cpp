#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;
bool safe(vector <vector<int>> m,vector<vector <int>>v,int x,int y,int n){
    if(x < n && x >= 0 && y < n && y >= 0 && m[x][y] == 1 && v[x][y] == 0){
        return true;
    }
    else{
        return false;
    }
}
void solve(vector <vector<int>> m,vector<vector <int>>v,int x,int y,vector <string> &ans,string path,int n){

if(x == n-1 &&y == n-1){
    ans.push_back(path);
    return ;
}
v[x][y]=1;

int newx=x+1;
int newy=y;
if(safe(m,v,newx,newy,n)){
    path.push_back('D');
    solve(m,v,newx,newy,ans,path,n);
    path.pop_back();
}
newx=x-1;
newy=y;
if(safe(m,v,newx,newy,n)){
    path.push_back('U');
    solve(m,v,newx,newy,ans,path,n);
    path.pop_back();
}
newx=x;
newy=y+1;
if(safe(m,v,newx,newy,n)){
    path.push_back('R');
    solve(m,v,newx,newy,ans,path,n);
    path.pop_back();
}
newx=x;
newy=y-1;
if(safe(m,v,newx,newy,n)){
    path.push_back('L');
    solve(m,v,newx,newy,ans,path,n);
    path.pop_back();
}
v[x][y]=0;
}
int main(){
   vector <vector<int>> maze={{1, 0, 0, 0},
                              {1, 1, 0, 1}, 
                              {1, 1, 0, 0},
                              {0, 1, 1, 1}};
 vector<vector <int>> visited=maze;
   vector <string> ans;
   string path="";
   int n=4;
   for (int i = 0; i <n; i++)
   {
    for (int j = 0; j <n; j++)
    {
        visited[i][j]=0;
    }
    
   }
   int x=0;
   int y=0;
   
solve(maze,visited,x,y,ans,path,n);
sort(ans.begin(),ans.end());
for (int i = 0; i <ans.size(); i++)
{
   cout<<ans[i]<<endl;
}

return 0;
}