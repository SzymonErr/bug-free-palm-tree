//
// Created by szymon on 7/21/19.
//

#ifndef LEARNING1_DERIVED_TWO_H
#define LEARNING1_DERIVED_TWO_H

#include <iostream>
#include "base.h"

template<typename T>
class derived_two : public base <int> {
    static int counter;
protected:
    T value_two;
public:
    derived_two() {
        std::cout << "derived_two constructor()" << std::endl;
        counter++;
    }
    derived_two(T tmp) {
        std::cout << "derived_two constructor(T)" << std::endl;
        value_two = tmp;
        counter++;
    }
    ~derived_two(){
        std::cout << "derived_two destructor" << std::endl;
        counter--;
    }
    void print_value(){
        std::cout << "derived_two value_two: " << value_two << std::endl;
    }
    virtual void print_counter(){
        std::cout << "derived_two class counter: " << counter << std::endl;
    }
};

    template<typename T>
    int derived_two<T>::counter = 0;



#endif //LEARNING1_DERIVED_TWO_H
