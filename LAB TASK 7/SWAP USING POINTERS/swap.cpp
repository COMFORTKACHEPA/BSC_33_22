#include <iostream>
using namespace std;

void swap(int* varA,int* varB);
int main(){
	
	//variables
    int varA = 25;
    int varB = 100;

	//ponter variables
    int* varA1;
    int* varB1;
   varA1 = &varA;
   varB1 = &varB;

	//printing values before swapping
    cout << "varA before swap: "<< varA  <<endl;
    cout<< "varB before swaap: "<<varB << endl;
	
	//calling a swapping fuunction
    swap( varA1, varB1);

	
	//printing values after swapping
    cout << "varA after swap: "<< varA  <<endl;
    cout<< "varB after swaap: "<< varB << endl;

    system("PAUSE");
    return 0;
}


//swap funuction implementetion
void swap(int* varA, int* varB){
    int temp;
    temp = *varA;
    *varA = *varB;
    *varB = temp;
}