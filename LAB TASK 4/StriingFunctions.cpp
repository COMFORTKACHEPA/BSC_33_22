#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str1[10] = "Hello";
    char str2[10] = "world";
    char str3[10];


    //copy string 
    strcpy(str3, str1);
    cout << "strcpy(str3, str1) : " <<str1<<endl;

    //concatenates
    strcat(str1,str2);
    cout << "strcat(str1,str3) : "<<str1  << endl;

    //total length
    int len = strlen(str1);
    cout << "strlen(str1) : " << len <<endl;
    system("pause");

    return 0;

}