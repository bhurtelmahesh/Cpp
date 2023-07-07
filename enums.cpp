#include <iostream>
#include <string>

enum Day {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(){

    Day today = Tue;

    switch(today){
        case Sun: std::cout << "It is Sunday today!\n"; //keys or values both are valid
                break;
        case Mon: std::cout << "It is Monday today!\n";
                break;
        case Tue: std::cout << "It is Tuesday today!\n";
              break;
        case Wed: std::cout << "It is Wednesday today!\n";
                break;
        case Thu: std::cout << "It is Thursday today!\n";
                break;
        case Fri: std::cout << "It is Friday today!\n";
                break;
        case Sat: std::cout << "It is Saturday today!\n";
                break;
        default: std::cout << "Not found!" << std::endl;
    }

}