#include <iostream>
using namespace std;
void reverse(char arr[],int n){
    int s=0;
    int e=n-1;
     while (s<e){
        swap(arr[s++],arr[e--]); 
     }
}
int getLength(char arr[]){
    int count=0;
    for (int i = 0; arr[i] !='\0'; i++)
    {
        count ++;
    }
    
return count;
}
char converter(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;    }
    else{
    ch= ch - 'A'+'a';
     return ch;
    }
   
}
 bool palindrom(char arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e){
        if(converter(arr[s])!=converter(arr[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}
int main(){
    char name[20];
    cout<<"Enter your name : \n";
    cin>>name;
    int len = getLength(name);
    cout<<len<<endl;
    reverse(name,len);
    cout<<"your name is ";
    cout<<name<<" ";
    cout<<"and it is palindrom or not = "<<palindrom(name,len);
    return 0;
    }