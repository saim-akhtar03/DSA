#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int brr[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int m=0;
    int n=0;
    int count=0;
while(count<15){
if(brr[m][n+1]!=1&&n+1<4){
    while(brr[m][n+1]!=1&&n+1<4){
        if(brr[m][n+1]==1||n+1>=4){
        break;
      }
    cout<<arr[m][n]<<" ";
    brr[m][n]=1;
      n++;
      count++;

    }
}
else if(brr[m+1][n]!=1&&m+1<4){
    while(brr[m+1][n]!=1&&m+1<4){
        if(brr[m+1][n]==1||m+1>=4){
            break;
        }
     cout<<arr[m][n]<<" ";
    brr[m][n]=1;
      m++;
       count++;
    }
}
else if(brr[m][n-1]!=1&&n-1>=0){
    while(brr[m][n-1]!=1&&n-1>=0){
    cout<<arr[m][n]<<" ";
    brr[m][n]=1;
       n--;
        count++;
    }
}
else if(brr[m-1][n]!=1&&m-1>=0){
    while(brr[m-1][n]!=1&&m-1>=0){
    cout<<arr[m][n]<<" ";
    brr[m][n]=1;
         m--;
          count++;
    }
}

}
cout<<arr[m][n];

}
