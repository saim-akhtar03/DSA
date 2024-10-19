#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(string a,string b,vector<vector <string>> &ans,vector<string>output,int i,int j){

}
int main(){
    string a="abca";
    string b="acca";
    int m=a.length();
    int n=b.length();
int arr[m][n];
for (int i = 0; i <=m; i++)
{
   for (int j = 0; j <=n; j++)
   {
    arr[i][j]=0;
   }
   
}

for (int i = 1; i <= m; i++)
{
   for (int j = 1; j <=n; j++)
   {
    if(a[i-1]==b[j-1]){
        arr[i][j]=arr[i-1][j-1]+1;
    }
    else{
        arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
    }
   }
   
}
for (int i = 0; i <= m; i++)
{
   for (int j = 0; j <=n; j++)
   {
    cout<<arr[i][j]<<" ";
   }

   cout<<endl;
   
}
cout<<arr[m][n];
return 0;
}
