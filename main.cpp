#include <iostream>
#include "grade.h"
#include <string>



int main() {
    grade temp;
    temp.welcome();

    std::cout<< temp.final() <<std::endl;

    return 0;
}
