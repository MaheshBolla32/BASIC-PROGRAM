#include <iostream>
using namespace std;

int main()
{
    string name;
    int password;

    cout<<"Enter the name: "<<endl; 
	cin>>name;
    cout<<" Enter your password: "<<endl;
	cin>>password;
    if (name == "qwerty") 
	{
        if (password == 1346) {
            cout << " Login successful ";
        }
        else {
            cout << " Incorrect password ";
        }
    }
    else {
        cout << " Incorrect Login Details ";
    }
	return 0;
	
}