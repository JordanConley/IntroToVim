#include <iostream>

#include "MyLinkedList.h"

void another_function(void) {

    std::cout << "hello" << std::endl;

}

int main(int argc, char** argv) {
    MyLinkedList<int> silly_variable_name;
    silly_variable_name.append(1);
    silly_variable_name.append(3);
    silly_variable_name.append(4);

    silly_variable_name.append(5);
    silly_variable_name.append(7);

    silly_variable_name.append(5); silly_variable_name.append(7);

    for (int i = 0; i < 10; i++) {
        silly_variable_name.append(i);
    }

    silly_variable_name.print_all();

    
    return 0;
}

