#include <iostream>
using namespace std;
int getSearch(int arr[],int j){
    for (int i = 0; i <5 ; i++)
    {
        if(arr[i]==j){
            return 1;
        }
    }
    return 0;
}
int main(){
    int j;
    int arr[5]={1,5,7,5,4};
    cout<<"enter a element to found copy\n";
    cin>>j;
    bool found = getSearch(arr,j);
  if (found){
    cout<<"the enterd number is present\n";
  }
  else{
    cout<<"the entered number is absent\n";
  }
return 0;
}