//not completed
#include<iostream>
using namespace std;
void fractional(float w[],float p[],float &x,int size,int min,int min1,float c,int z,int weight,float &profit){
        if(w[z]<=c){
           weight+=w[z];
           c=c-w[z];
           profit+=p[z];
           x[z]=1;

        }
        else{
            float y=c/w[z];
            profit=profit+p[z]*y;
            x[z]=y;
            return;
        }
    for(int i=0;i<5;i++){
        if(min>w[i]&&min>min1){
            min=w[i];
            z=i;
        }
    }
    fractional(w,p,x,size,w[0],min,c,z,weight,profit);
}
int main(){
    float w[5]={30,10,50,40,20};
    float p[5]={500,100,200,300,400};
    float x[5]={0,0,0,0,0};
    float capacity=90;
    int min=w[0];
    float profit=0.0;
    int z;
    int size=5;
    for (int i = 0; i < size; i++)
    {
       if(min>w[i]){
        min=w[i];
        z=i;
       }
    }
    for (int i = 0; i <size; i++)
    {
       cout<<x[i]<<" ";
    }
    
    
    fractional(w,p,x,size,w[0],min,capacity,z,0,profit);
}