#include <iostream>
using namespace std;

int main (){
    int numberArray[5];
    int * pPointer = nullptr;

    // assign address to the first element
    pPointer = numberArray;
    

    *pPointer = 10;  //assign value to the first element
    
    //increment pointer using pointer arithmetic
    pPointer ++;
    *pPointer = 20;

    //assign address of the third element to pointer
    pPointer = &numberArray[2];
    *pPointer =30;


    // assign forth element to pointer
    pPointer = numberArray + 3;
    *pPointer = 40;

    // asssign address to the first element to pointer
    pPointer = numberArray;

    //assign value using fifth elemetn using indirection and pointer
    *(pPointer+4) =50;

// itereate and output all elements in arraay
    for (int n = 0; n < 5; n++)
    cout <<  numberArray[n]<<", ";
    cout <<endl;
    for (int n = 0; n < 5; n++)
    cout <<  &numberArray[n]<<", ";
    return 0;}