#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(1);
    a.push_back(4);
    a.push_back(6);
    a.push_back(5);
    sort(a.begin(),a.end());
    cout<<binary_search(a.begin(),a.end(),6)<<endl;
    int c = 3;
    int b = 7;
    cout<<"max-> "<<max(c,b)<<endl;
    cout<<"min-> "<<min(c,b)<<endl;
    string s ="abcd";
    reverse(s.begin(),s.end());
    cout<<"reverse string is "<<s;


  
}