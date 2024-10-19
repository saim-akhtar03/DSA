#include <iostream>
using namespace std;
int main(){
   int i=0;
   int j=0;
   int ans;
int a[5]={1,2,3,4,5};
int b[3]={4,5,6};
while (i<5&&j<3)
{
  if(a[i]==b[j]){
   cout<<a[i]<<"\t";
   i++;
   j++;
  }
  else if(a[i]<b[j]){
   i++;
  }
  else{
   j++;
  }
}
    return 0;
    }

