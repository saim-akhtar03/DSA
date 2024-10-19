#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int> a1;
bool present(int arr[][3],int target){
    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++){
            if(target == arr[i][j]){
                return 1;
            }
        }
    }
}
int sum(int arr[][3]){
     for ( int i = 0; i < 3; i++)
     {
        int sum=0;
        for(int j=0; j<3; j++){
        sum += arr[i][j];
        }
        cout<<sum<<endl;
    a1.push_back(sum);
     }
}
int main(){
    int i=0;
    int j=1;
    int temp;
    int arr[3][3];
    int target;
        cout<<"enter elements in 3*3 array "<<endl;
     
    for (int i = 0; i < 3; i++)
    {
        for(int j =0; j<3; j++){
            cin>>arr[i][j];
        }
    }
     for ( int i = 0; i < 3; i++)
     {
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<"enter target to find "<<endl;
     cin>>target;
     if(present){
        cout<<"element found\n";
     }
     else{
        cout<<"element not found\n";
     }
     cout<<"sum of all rows of arry are: \n";
     sum(arr);
     cout<<endl;
    temp = *max_element(a1.begin(),a1.end());
    cout<<temp;
     return 0;
}