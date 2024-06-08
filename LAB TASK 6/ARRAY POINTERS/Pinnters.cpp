#include <iostream>
using namespace std;

int main(){
    //variables
    int rows, columns;

    // prompting user to enter values
    cout << "Enter number of rows <= 3: ";
    cin >> rows;
    cout << "Enter number of columns <=3: ";
    cin >> columns;


    //restricting columns and rows to be less or equal to 3
    while (rows <=3 && columns <=3)
    {
        cout << "Enter number of rows <=3: ";
        cin >> rows;
         cout << "Enter number of columns <=3: ";
         cin >> columns;
    }

    //creating a 2D array array of 
        int** pArrays =  new int*[rows];

    //creating the arrays 
        for (int i = 0; i < rows; i++)
              pArrays[i] = new int[columns];


    //   giving values to arrays
        for (int i = 0; i < rows; i++){
    
             for (int j = 0; j < columns; j++)
                   pArrays[i][j] = i + j;

    }

    //printing the array
    for (int i = 0; i < rows; i++){
    
             for (int j = 0; j < columns; j++)
                   cout << pArrays[i][j] << " ";
                   cout << endl;
    }

    //deleting the arrays
    for (int i = 0; i < rows; i++)
        delete[] pArrays[i];
    

    // freeing the arrays that hold all arrays
    delete[] pArrays;
    pArrays = NULL;

    //end of program

    system("pause");
    return 0;
    
    
}