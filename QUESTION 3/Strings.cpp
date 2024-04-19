#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



int main(){
    //initialize
    string value[8] ={"B123","C234","A345","C15","B177","G3003","C235","B179"};

      for(int i = 0; i < 8;i++)
      //checking if fist letter if == B
        if(value[i].at(0)=='B')    
          cout <<setw(6)<<value[i];
          cout<<endl;
          system("pause");

    return 0;
}