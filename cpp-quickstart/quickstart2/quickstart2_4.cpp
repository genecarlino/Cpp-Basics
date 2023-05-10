#include <iostream> //I/O Stream
#include <vector>
#include <string>
#include "Container.hpp"


int main (){

    int i =7;
    float f = 3.14;
    Container myContainer("myContainer");
    myContainer.AddData(1);
    myContainer.AddData(2);
    myContainer.AddData(3);
    myContainer.PrintData();

    Container myContainer2("myContainer2");
    myContainer2.AddData(-1);
    myContainer2.AddData(-2);
    myContainer2.AddData(-3);
    myContainer2.PrintData();

    
    return 0;
}

