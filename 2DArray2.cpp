#include<iostream>
using namespace std;
void array(int arr[][3]){
    for (int i = 0; i < 3; i++)
    {
        if(i&1){
            for(int j=2;j>=0;j--){
                    cout<<arr[j][i]<<", ";
            }

        }
        else{
        for(int j=0; j<3; j++){
            cout<<arr[j][i]<<", ";
        } 
    }
    }
    
}
int main(){
    int arr[3][3];
    cout<<"enter element in 3*3 array "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    array(arr);
    return 0;
    
}