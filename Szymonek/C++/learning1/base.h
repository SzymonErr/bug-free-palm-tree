//
// Created by szymon on 7/17/19.
//

#ifndef LEARNING1_BASE_H
#define LEARNING1_BASE_H

#include <iostream>

using namespace std;

template <typename T>
class base {
protected:
    static int counter;
    T value;

public:
    base(){
        std::cout << "Base constructor()" << std::endl;
        counter++;
    }

    base(T tmp){
        std::cout << "Base constructor(T)" << std::endl;
        value = tmp;
        counter++;
    }
    virtual ~base(){
        std::cout << "Base destructor" << std::endl;
        counter--;
    }

    virtual void print_value() = 0;

    virtual void print_counter(){
        std::cout << "Base class counter: " << counter << std::endl;
    }
};


template<typename T>
int base<T>::counter = 0;

#endif //LEARNING1_BASE_H
