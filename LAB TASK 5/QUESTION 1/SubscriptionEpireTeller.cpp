#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void test (int number);

int main (){

    //creatin local variable
    int daysUntilExpiration;
     
     //generating randaom number

     daysUntilExpiration = rand() % 12;
    if(daysUntilExpiration > 5 && daysUntilExpiration <11)
        cout << " Your subscription will expire soon. Renew now!"<<endl;

        else if(daysUntilExpiration > 1 && daysUntilExpiration <=5)
          cout << "Your subscription expires in "<< daysUntilExpiration << "\nRenew now and save 10%!"<<endl;

        else if(daysUntilExpiration==1)
            cout << "Your subscription expires within a day!\nRenew now and save 20%!"<<endl;

         else
            cout << "you have an active subscription" << endl;



        return 0;
}

