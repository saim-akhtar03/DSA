#include <iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    for(int l=1; l<100; l++){
        a[l]=l;
    }

    cout<<"enter a number\n";
    cin>>n;
    for(int i=0; i<100;i++){
        for(int j=100; j>i;j--){
            for(int k=i+1; k<j; k++){
            if(a[i]+a[j]+a[k]==n){
                cout<<a[i]<<"+"<<a[j]<<"+"<<a[k]<<" is equals to "<<n<<endl;
                break;
            }
            }

        }

    }
    return 0;
}