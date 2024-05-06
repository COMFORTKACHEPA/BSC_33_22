#include <iostream>
using namespace std;

int main (){
    int a = 5;
    int b = 20;
    int c;

    if(a && b)
    cout << "line 1 - condition is true"<<endl;

    if (a || b)
    cout << "line 2 - condition is true"<< endl;

    // a and b value
    a = 0;
    b = 10;

    if (a && b)
    cout << "line 3 - condtion is true" << endl;
    else
    cout << "line 4 - condition is not true " << endl;

    if(!(a&&b))
    cout << "line 5 - condition is true"<<endl;

    return 0;
}