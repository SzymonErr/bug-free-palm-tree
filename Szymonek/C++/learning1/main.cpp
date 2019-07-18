#include <iostream>
#include "base.h"
#include "derived_one.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    //base <int> *test = new base <int>(10)
    derived_one <int> *test = new derived_one <int>(10);
    test->print_value();
    test->print_counter();
    test->base::print_counter();

    cout << endl;

    base<int> *arr[3];
    arr[0] = test;
    arr[0]->print_value();
    arr[0]->print_counter();
    arr[0]->base::print_counter();

    return 0;
}