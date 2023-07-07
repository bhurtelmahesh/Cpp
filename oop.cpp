#include <iostream>

class Human{
    public:    //access modifier
        std::string name = "Ram";    //default values van be passed, and later modified
        std::string job = "Student";
        int age = 70;

        void eat(){  ///methods
            std::cout << "This Human is eating!" << std::endl;
            
        }
        void drink(){
            std::cout << "This Human is drinking!" << std::endl;

        }
        void sleep(){
            std::cout << "This Human is sleeping!" << std::endl;

        }
};

int main(){

    Human human1;   //creation of a new human object
    // human1.name = "Bhurtel Maheshwor";
    // human1.age = 28;
    // human1.job = "Engineer";

     Human human2;
    human2.name = "Itsuki Tanaka";
    human2.age = 29;
    human2.job = "Teacher";

    std::cout << human1.name << '\n' << human1.age << '\n' << human1.job << '\n';
    std::cout << human2.name << '\n' << human2.age << '\n' << human2.job << '\n';


   human2.eat();
   human2.sleep();
   human2.drink();

   return 0;


}