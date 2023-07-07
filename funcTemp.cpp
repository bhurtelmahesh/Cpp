#include <iostream>
// template<typename T> working with one data type
//or we can make it like:
template<typename T, typename V> //working with two data types


// template type istead of actual data type
T max(T x, V y){  //or we can say auto max(T x, V y){...};
    return (x > y) ? x : y;
}

int main(){

    std::cout << max('B',2) << '\n';

    return 0;
}