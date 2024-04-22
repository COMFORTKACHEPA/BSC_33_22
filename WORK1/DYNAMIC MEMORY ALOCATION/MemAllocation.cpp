#include <iostream>
using namespace std;


int main (){
    int numberOfElement = 0;
    int* dynamicArray = nullptr;

    cout << "How many numbers would you like to type? ";
    cin >> numberOfElement;

    dynamicArray = new int[numberOfElement];

    if(dynamicArray == nullptr)
    cout << "Error : memory could not be allocated ";

    else{
        for(int i = 0 ; i< numberOfElement; i++){
            cout<< "Enter number: ";
            cin >> dynamicArray[i];
        } 

        cout << "you have entered : ";
        for(int j = 0; j < numberOfElement; j++)
        cout <<dynamicArray[j]<<", ";

        delete dynamicArray;

        
    }
    system("pause");

    return  0;
}