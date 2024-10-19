#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int,5> a ={1,3,4,5,6};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"array is empty "<<a.empty()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back();
    return 0;
}