#include<iostream>
using namespace std;
int main(){
    int row;
    int column;
    cin>>row;
     int z;
    int **arr=new int*[row];
    for (int i = 0; i < row; i++)
    {      cout<<"enter column\n";
        cin>>column;
        arr[i]= new int[column];
        cout<<"enter elements\n";
        for (int j = 0; j < column; j++)
        {
           cin>>arr[i][j]; 
        }
    }

        for (int i = 0; i <row;  i++)
    {
        int *fptr=arr[i];
        for (int j=0 ; j < sizeof((*ptr)); j++)
        {
           cout<<*(ptr+j)<<" ";
        }
        cout<<endl;
    }
    
    
}