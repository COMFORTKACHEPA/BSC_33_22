#include <iostream>
using namespace std;

int main (){
    int x,y;
    int sum;

    cout <<"enter number : ";// orient user

    cin >>x; // get user input
    cout << "enter another number : ";
    cin>>y;
    sum = x + y;

    cout << "Sum is : "<<sum<<endl;
    system("pause");
    return 0;

}