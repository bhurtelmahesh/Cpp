#include <iostream>
#include <vector>
#include <cmath>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

typedef std::string text_t;
typedef int number_t;
// using text_t = std::string; //c++11 extension
// using number_t = int;

void variables();
void nameSpaces();
void typedefs();
void input();
void maths();


int main(){

    //comment goe here

    maths();


    return 0;
}

void maths(){

    double x = 3.6;
    double y = 4;
    double z;

    z = std::max(x,y); //min
    z = std::min(x,y); //max
    z = pow(2,4); //exponential
    z = abs(-54);
    z = round(x);
    z = ceil(x); //up
    z = floor(x); //down


    std::cout << z << std::endl;


}

void input(){

    std::string name;
    int age;

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "What is your name?: ";
    std::getline(std::cin >>std::ws, name);           //Multiple words, eliminate newline chars


    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old!" << std::endl;

}

void typedefs(){

    text_t word = "Hello";
    number_t age = 28;

    std::cout<< word << std::endl;
    std::cout << age << std::endl;

}




void hello(){
    std::cout << "Hello World!" << std::endl; //flushes the newline char
    std:: cout << "How are you?\n";
}


void nameSpaces(){

    //using namespace second; //no prefixes needed
    //using namespace first; //no prefixes needed

    int x = 0;


    std::cout << first::x <<std::endl;
    std::cout << second::x <<std::endl;
    std::cout << x <<std::endl;

}

void variables(){
    //integers
    int x;
    x = 100;
    int y = 3;
    int mult = x*y;
    int age = 21;
    int year = 2020;
    int days = 7;

    //doubles
    double price = 8.8;
    double gpa = 2.5;
    double temp = 26.5;

    //chars
    char grade = 'A';
    char initial = 'M';

    //strings
    std::string currency = "¥";
    std::string name = "Bhurtel";
    std::string day = "Friday";
    std::string food = "Sushi";

    //booleans
    bool student = false;
    bool pass = true;
    bool sale = true;
    bool waribiki = false;

    //constants
    const double PI = 3.14159;
    const int SPEED_O_Light = 299792458;





    std::cout<<mult <<std::endl;
    std::cout<<gpa <<std::endl;
    std::cout<<grade <<std::endl;
    std::cout<<name <<std::endl;

    std::cout<<"Hello, " << name <<"!" <<std::endl;

}