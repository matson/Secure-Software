#include <iostream>
using std::cout;
using std::endl;
using std::string;

//Declare a string
//Now make a pointer to that string which stores the address of the string. 
//Display both the string and the address.
int main() {
    string str = ("cookie");
    string *pointer = &str;

    cout << str << endl;
    cout << pointer << endl;
    cout << &str << endl; //verified
    cout << "nice!" << endl;
}
