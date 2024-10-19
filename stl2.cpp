#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(2);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"front-> "<<v.front()<<endl;
    cout<<"back-> "<<v.back()<<endl;
    cout<<"before ";
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after ";
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"vector a-> ";
    for(int i:a)
    {
        cout<<i;
    }
    return 0;
}