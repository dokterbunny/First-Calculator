#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
cout << "password: ";
string penis;
cin >> penis;
if (penis == "hotboygerick"){
    cout << endl << endl;
  
    cout << "type the first numbers: ";
    int boob1;
    cin >> boob1;
    cout << endl << endl;

    cout << "type the modefier: ";
    string boob2;
    cin >> boob2;
    cout << endl << endl;

    cout << "type the last numbers: ";
    int boob3;
    cin >> boob3;
    cout << endl << endl;
    
    string boob4 = "het goede antwoord is: ";

    if (boob2 == "+" || boob2 == "plus"){
       cout << boob4 << boob1 + boob3;
    }
    else if (boob2 == "*" || boob2 == "x" || boob2 == "keer"){
        cout << boob4 << boob1 * boob3;
    }
    
    else if (boob2 == "-" || boob2 == "min" || boob2 == "minus"){
        cout << boob4 << boob1 - boob3;
    }
    else if (boob2 == ":" || boob2 == "gedeeld"){
        cout << boob4 << boob1 / boob3;
    } 
    else {
        for (int boob5 =1; boob5 >= 0; ++boob5){
            cout << "ERROR!!!";
        }
    }
}
else {
    cout << "you didn't suck gerick";
}
cout << endl << endl;
}