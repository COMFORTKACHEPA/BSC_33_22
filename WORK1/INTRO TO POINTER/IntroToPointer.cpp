#include <iostream>
using namespace std;


int main (){

    //pointer declare to nulL

    int* pPointer = nullptr;

    int interger = 5;

    //assign pointer to address of object
    pPointer = &interger;

    
    //output value of int var
    cout<<"intergerVar : "<<interger<<endl;

     // output address of intergerVar
    cout<<"Address of integerVar : "<<&interger<<endl;

   
    // output address assiged to pointer
    cout << "pPOinter "<<*pPointer++<<endl;

    // output address of pPointer
    cout<<"Address of pointer "<<&pPointer<<endl;
    cout <<*pPointer;

    return 0;
}