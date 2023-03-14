#include <iostream>

using namespace std;

int main()
{
char choice;
 do {
    cout<<"Enter (a,b,c,d,e,g (for exit))"<<endl;
    cin>> choice;
    switch (choice)
    {
    case 'a':
    case 'A':
        cout<< "chicken 200 egp"<<endl;
        break;
    case 'b':
    case 'B':
        cout<< "meat 300 egp"<<endl;
        break;
    case 'c':
    case 'C':
        cout<< "seafood 400 egp"<<endl;
        break;
    case 'd':
    case 'D':
        cout<< "beverage 100 egp"<<endl;
        break;
    case 'e':
    case 'E':
       cout<< "candy 50 egp"<<endl;
        break;
    default:
       cout<< "please choose from a,b,c,d,e,g (for exit)"<<endl;
   } } while (choice!='g');
   cout << "thanks for your visit";

    return 0;
}
