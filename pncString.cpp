#include<iostream>
using namespace std;
class Saim{
    public:
int pnc(string str,string s,int arr[],int ch[]){
    int temp =0;
    int num=0;
    for (int i = 0; i < str.length(); i++){
        char ch = str[i];
        if(ch>='a' && ch<='z'){
        temp = ch - 'a';
        arr[temp]++;
        }
    }
    for (int j = 0; j < s.length(); j++){
        char bh = s[j];
        if(bh>='a' && bh<='z'){
        num = bh - 'a';
        ch[num]++;
        }  
    }  
}
bool abc(int arr[],int ch[]){
    int temp=0;
        for (int m = 0; m < 26; m++)
    {
            if(arr[m]<ch[m]){
                temp++;
            }
}
        if(temp>0){
            return 0;
        }
        else{
            return 1;
        }
}
};
int main(){
    int arr[26]={0};
    int ch[26]={0};
    int n;
    Saim obj;
    string str,s;
    cout<<"enter string: "<<endl;
    cin>>str;
    cout<<"enter leters to found wheter is PnC is present or not: "<<endl;
    cin>>s;
    obj.pnc(str,s,arr,ch);
    n=obj.abc(arr,ch);
    cout<<n;
    return 0;

}
