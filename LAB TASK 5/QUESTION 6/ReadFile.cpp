#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

//function decla
void vowelOutPut(string name);
void reverse (string name);
void countWords(string name);
void capitalizeSecondLetter(string name);

int main(){

    string fileData;

    ifstream file;

    file.open("program.txt",ios::app);
    if(file.is_open()){
    while(getline(file,fileData)){
        file >> fileData;
    }file.close();

    }

    else
    cout << "error opening your file"<<endl;

    vowelOutPut(fileData);
    countWords(fileData);

   
    reverse(fileData);

    cout << "file with second letter of each word capitalized\n";
    capitalizeSecondLetter(fileData);



    return 0;
}


// function definition
void vowelOutPut(string name){
     int number =0;
    for(int i = 0;i <name.size();i++){
        char letter = tolower(name.at(i));
       
        if(letter=='a'|| letter=='e'||letter=='i'|| letter=='o'||letter=='u')
            number++;
        
    }

    cout << "The file has "<< number <<" vowels"<<endl;
}



//another definition
void reverse (string name){
    string letter="";
    for(int i =name.size()-1;i>=0;i--)
        letter += name[i];
    

    cout << "reverse of the file\n"<<letter<<endl;
}


// definition
void countWords(string name){
    int number = 0;
     for(int i = 0;i<name.size();i++){
        if(name.at(i)==' ')
        number++;
    }
    if(number!=0)
    cout<< "number of words in a file area "<<number + 1<<endl;
}


//definition
    
void capitalizeSecondLetter(string name){
    for(int i=0;i<name.size();i++){
        if(i==1)
        name[i]=toupper(name[i]);

        else if(name.at(i)==' ')
        name[i+2]=toupper(name[i+2]);
    }
    cout<<name;
}