#include "Person.h"
#include <string>
#include <iostream> 
using namespace std;


int main(){
    Person Jane = Person( 60.0f);
    Person John = Person(75.0f);

    float totalWeight = Jane + John;

    cout << "Total Weight: " << totalWeight << endl;

    return 0;
}