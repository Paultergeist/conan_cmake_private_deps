#include <iostream>
#include "libTest.h"
#include <gtest/gtest.h>

void libTest(){
    #ifdef NDEBUG
    std::cout << "libTest/1.0: Hello World Release!" <<std::endl;
    #else
    std::cout << "libTest/1.0: Hello World Debug!" <<std::endl;
    #endif
}
