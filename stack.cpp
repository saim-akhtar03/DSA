#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> n;
    n.push("saim");
    n.push("akhtar");
    n.push("khan");
    cout<<n.top();
    // for(int i:n){
    //     cout<<i;
    // }
    return 0;
}