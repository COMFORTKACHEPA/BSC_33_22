#include <iostream>
#include <iostream>

using namespace std;


int main (){
    // dynamically allocating memory to variables
    int* interger = new int;
    string* strings = new string;

    //orienting users
    cout << "enter the interger value: ";
    cin >> *interger;

    //orienting 
    cout << "enter the string value: ";
    cin >> *strings;

    //printing the value of the integer
    cout << "the value of dynamically allocated interger is : "<< *interger<<endl;

    //printing the value of the string
    cout<<"The value of dynamicaly allocated string is : "<<*strings<<endl;
    system("pause");
    return 0;
 }
