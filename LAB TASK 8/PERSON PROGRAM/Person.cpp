#include "Person.h"
#include <string>
using namespace std;


Person::Person(){
    float mWeght = 0.0f;
    string mFirstname = "";
}

Person::~Person(){

}

Person::Person(float newWeight){
    mWeight = newWeight;
}

//overloading
float Person::operator+(const Person& otherPerson){
        this->mWeight = this->mWeight + otherPerson.mWeight; 
        return this->mWeight;
}