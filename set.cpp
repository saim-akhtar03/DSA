#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> a;
    a.insert(1);
    a.insert(4);
    a.insert(3);
    a.insert(2);
    a.insert(5);
    a.insert(1);
    for(int i:a){
        cout<<i<<" ";
    }
    return 0;

}