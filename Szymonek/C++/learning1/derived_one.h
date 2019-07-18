//
// Created by szymon on 7/17/19.
//

#ifndef LEARNING1_DERIVED_ONE_H
#define LEARNING1_DERIVED_ONE_H

#include <iostream>
#include "base.h"

template<typename T>
class derived_one : public base<int> {
    static int counter;
protected:
    T value_one;

public:
    derived_one(){
        std::cout << "Derived_one constructor()" << std::endl;
        counter++;
    }

    derived_one(T tmp){
        std::cout << "Derived_one constructor(T)" << std::endl;
        value_one = tmp;
        counter++;
    }

    ~derived_one(){
        std::cout << "Derived_one destructor" << std::endl;
        counter--;
    }

    void print_value(){
        std::cout << "Derived_one value_one: " << value_one << std::endl;
    }

    virtual void print_counter(){
        std::cout << "Derived_one class counter: " << counter << std::endl;
    }

};

template<typename T>
int derived_one<T>::counter = 0;


#endif //LEARNING1_DERIVED_ONE_H
