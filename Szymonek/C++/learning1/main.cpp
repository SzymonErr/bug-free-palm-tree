#include <iostream>
#include "base.h"
#include "derived_one.h"
#include "derived_two.h"

using namespace std;

void test1(){
    //base <int> *test = new base <int>(10)
    derived_one <int> *test = new derived_one <int>(10);
    //derived_two <char> *var = new derived_two <char>('k');
    //derived_two <bool> *bul = new derived_two <bool>(false);
    test->print_value();
    test->print_counter();
    test->base::print_counter();

    cout << endl;

    base<int> *arr[3];
    arr[0] = test;
    arr[0]->print_value();
    arr[0]->print_counter();
    arr[0]->base::print_counter();
    derived_two <char> *var = new derived_two <char>('k');
    arr[1] =  var;
    arr[1]->print_value();
    arr[1]->print_counter();
    arr[1]->base::print_counter();
    derived_two <bool> *bul = new derived_two <bool>(false);
    arr[2] =  bul;
    arr[2]->print_value();
    arr[2]->print_counter();
    arr[2]->base::print_counter();
    auto print_all = [](int i, base<int> **arr){for (int j=0; j<i; j++){
        cout << j << ") ";
        arr[j]->print_value();
    }};
    print_all(3, arr);
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    test1();

    return 0;
}