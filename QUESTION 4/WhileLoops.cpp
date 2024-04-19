#include <iostream>
using namespace std;

int main (){
    
    //variable initialization
    int number= 20;

    while (number <= 5 || number >=10)  {
      //orienting user
       cout << "Enter an integer  value between 5 and 10 : ";
       cin >> number;  //input

       if(number > 5 && number < 10)
       continue;
    
        else
         cout << "Sorry You enterd an invalid number "<< number << ". Please enter a number between 5 and 10."<<endl;
    }

    cout << "your input value(" << number<< ") has been accepted."<<endl;
     
    system("pause");
    
}