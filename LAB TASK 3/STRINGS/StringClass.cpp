#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Hello";
    string str2 = "world";
    string str3;
    int len;

    //copy str1 into str3
    str3 = str1;
    cout << "str3 : "<< str3 << endl;

    //concatenation str1 and atr2
     str3 =str1 + str2;
     cout << "str2 + str2 : " <<str3 <<endl;

     //total lenth after concatenation
     len = str3.size();
     cout << "str3.size() : "<< len <<endl;
     

    return 0;
}