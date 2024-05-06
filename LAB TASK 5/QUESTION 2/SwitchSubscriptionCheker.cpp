#include <iostream>
#include <cmath>
using namespace std;

void test(int daysUntilExpiration);

int main() {
    unsigned int daysUntilExpiration = rand() % 12;

    switch (daysUntilExpiration) {
        case 0:
        case 11:
            cout << "You have an active subscription" << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!\nRenew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << "\nRenew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
    }

   

    return 0;
}
