#include <iostream>
using namespace std;


//function declaration
void swapNumbers(int &varA, int  &varB);


 	//main funcion
int main(){

	//local variables
    int varA = 25;
    int varB = 100;

	//printing values before swappping
    cout << "varA before swap: "<< varA  <<endl;
    cout<< "varB before swaap: "<<varB << endl;

	//calling swapping function
    swapNumbers( varA, varB);

	//printing vlaues after swapping
    cout << "varA after swap: "<< varA  <<endl;
    cout<< "varB after swaap: "<< varB << endl;

    system("PAUSE");
    return 0;
}

// swap function definition

void swapNumbers(int &varA, int &varB){
	//swapping values
    int temp = varA;
    varA = varB;
    varB = temp;
}