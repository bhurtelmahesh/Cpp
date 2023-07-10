#include <iostream>

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this-> year = year;
        this-> color = color;

    }
};

class Student{
    public:
        std::string name;
        int age;
        double gpa;

        Student(std::string name, int age, double gpa){
            this->name = name;
            this->age = age;
            this->gpa = gpa;
        }

        // //naming the parameters differently
        // Student(std::string x, int y, double z){
        //     name = x;
        //     age = y;
        //     gpa = z;
        // }
};

int main(){

    Car car1("Chevrolet", "Corvette", 2023, "Black");
    Car car2("Audi", "Q8", 2023, "Gray");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << "\n\n";

    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << '\n';




    Student student1("Mahesh", 28, 4.5);
    Student student2("Bhurtel", 29, 4.0);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    return 0;
}