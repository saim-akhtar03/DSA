#include <iostream>
using namespace std;
int array(int j,int n,int a[]){
    for(int i=0;i<n;i++){
    if (j==a[i]){
        return  i+1 ;
    }
    }
    return -1;
};
int main(){
    int n,i,j;
    cout<<"enter thr size os array\n";
    cin>>n;
    int a[n];
    cout<<"enter the elements in array\n";
    for (i=0;i<n;i++){
        cin>>a[i];
    }
      cout<<"enter a number to found the duplicate of it\n";
    cin>>j;
    cout<<array(j,n,a)<<endl;

   return 0;

}