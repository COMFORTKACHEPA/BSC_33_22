#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function decration
void square( double number);
void rectangle(double number, double number1);
void triangle(double numbe, double number1, double number2);

int main (){
    //variables
    double side1 = 0;
    double  side2 = 0 , side3 = 0;
    int number=0;
while(true){
    cout << "Please select the area of the shape to calculate\n1. Square\n2. Rectanlge\n3. Triangle\n4. Quit Program \nnumber : ";
    cin >>number;

    switch(number){
        case 1: cout<<"enter side value : ";
                cin >> side1;
                square(side1);  
                    break;
        case 2: cout << "enter sides value : ";
                cin >> side1;
                cin >>side2;
                rectangle(side1,side2);
                break;
        case 3:
                triangle(side1,side2,side3);
                break;
        case 4:system("exit");

    }
    if(number==4)
    break;
}
}

// function defitions


//  square function
void square( double number){
    while(number <= 0){
                     cout << "enter the side value";
                     cin >> number;
                }
        cout <<"Area of the square is "<< number*number<<" m"<<endl;
}

// rectanle function
void rectangle(double number, double number1){
    while(number<= 0 && number1 <=0) {
                     cout << "enter the sides value";
                     cin >> number;
                     cin >> number1;
                }
    cout << "Area of the rectangle is "<< number*number1<<" m"<<endl;
}

//triangle function
void triangle(double numbe, double number1, double number2){
    while(numbe <= 0 || number1 <=0  || number2 <=0) {
                     cout << "enter the sides value : ";
                     cin >> numbe;
                     cin >> number1;
                     cin >> number2;
                }  //using heron's formular
            double s = (numbe + number1+number2)/2;
            double number = s*(s-numbe )*(s-number1)*(s-number2);
            double area = sqrt(number);
    cout <<"Area is "<< fixed << setprecision(2) << area <<" m"<< endl ;

}
