#include <iostream>
#include <string>

struct student{
    std::string name;
    double gpa;
    bool passed;
};

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car car); //passed by value. by ref: void printCar(Car &car)

int main(){
    Car car1;
    Car car2;

    car1.model = "XXX";
    car1.year = 2023;
    car1.color = "Matte Black";

    car2.model = "Gran Torino"; 
    car2.year = 2022;
    car2.color = "Black";

    std::cout << &car2 << std::endl; //checking the address for pbv or pbr;

    // printCar(car1);
    printCar(car2);

}

void printCar(Car car){ //passed by value. by ref: void printCar(Car &car)
        std::cout << &car << std::endl;
    std::cout << car.model << '\n' << car.year << '\n' << car.color << '\n';
}

// int main(){

//     student student1;
//     student1.name = "Ram";
//     student1.gpa = 3.55;
//     student1.passed = true;

//     student stu2;
//     stu2.name = "Itsuki Tanaka";
//     stu2.gpa = 4.0;
//     stu2.passed = true;


//     std::cout << student1.name << "\n" << student1.gpa << "\n" << student1.passed << "\n\n";
//     std::cout << stu2.name << "\n" << stu2.gpa << "\n" << stu2.passed << std::endl;

//     return 0;
// }