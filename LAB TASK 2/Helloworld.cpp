#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> msg{"hello", "c++", "world", "vs code" "and the c++ extensions"};
    for (const string &word : msg){
        cout << word <<" ";
    }
    cout << endl;

