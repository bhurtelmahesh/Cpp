#include <iostream>


class Stove{
    private:   //Abstraction
        int temp = 0;

    public: //getter
        int getTemp(){
            return temp;
        }

    void setTemp(int temp){  //setter
        this->temp = temp;
    }


};

int main(){

    Stove stove;

    stove.setTemp(200);

    std::cout << "Stove temperature set to " << stove.getTemp() <<" degree Celcius." << std::endl;
    return 0;
}