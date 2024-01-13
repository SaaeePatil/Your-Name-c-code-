#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"Welcome to the code of c++"<<endl<<endl;

    string yourFirstName, yourSecondName;
    cout<<"Enter your first name ? ";
    cin>>yourFirstName;
    cout<<"Enter you last name ";
    cin>>yourSecondName;

    cout<<"Ok so you Name is, "<<yourFirstName+" "+yourSecondName<<endl;

    string txt1 = yourFirstName;
    string txt2 = yourSecondName;
    string lengthTxt = txt1 + txt2;

    cout<<"The length of you Full Name is "<< lengthTxt.length();

    return 0;
}
