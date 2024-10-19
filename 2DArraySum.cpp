#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int brr[3][3]={1,2,3,4,5,6,7,8,9};
    int crr[3][3]={0};
    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++){
            for (int k = 0; k < 3; k++)
            {
              crr[i][j]+=arr[i][k]*brr[k][j];
            }
            

        }
    }
    for (int l = 0; l < 3; l++)
    {
      for(int m=0; m<3; m++){
        cout<<crr[l][m]<<" ";
      }
      cout<<endl;
    }
    return 0;
    
}