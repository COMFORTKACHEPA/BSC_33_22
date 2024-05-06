#include <iostream>
#include <fstream>
using namespace std;

int main (){

    char data[100];

    // open text in write mode

    ofstream outfile;
    outfile.open("afile.txt");

    cout << "write to a file" <<endl;
    cout << "enter your name : ";
    cin.getline(data,100);

    // write data to the text file
    outfile<<data<<endl;

    cout << "enter your age : ";
    cin >> data;
    cin.ignore();

    //wirte input data into the text file
    outfile<<data<<endl;

    //close a file
    outfile.close();

    //open file in read mode now
    ifstream readfile;
    readfile.open("afile.txt");

    cout <<" reading from the text file"<<endl;
    readfile >> data;

    cout << "write data at the screan"<<endl;
    cout << data << endl;

    //reading again
    readfile >> data;
    cout << data<<endl;

    // CLOSE
    readfile.close();


    system("pause");
    return 0;
}                   