#include <iostream>
#include <string>
using namespace std;
class sixth{
    public:
    string aadil;
    string saim;
};
class school:public sixth{
    public:
    void A(){
    cout<<"saim ke baare me kuch likho\n ";
    getline(cin,saim);
    cin.ignore(); 
    cout<<"aadil ke baare me kuch likho\n ";
    getline(cin,aadil);
    cin.ignore(); 
    }
    void B(){
cout<<aadil<<",nahi hai bhot kharab hai\n";
cout<<saim<<",nahi hai bhot acha hai\n";
    }
};
int main(){
school priyadarshini;
priyadarshini.A();
priyadarshini.B();

return 0;
}