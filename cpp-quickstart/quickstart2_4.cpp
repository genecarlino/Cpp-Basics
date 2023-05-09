#include <iostream> //I/O Stream
#include <vector>

//structs are automatically public

struct Container{
        Container(){
            std::cout << "Container constructed" << std::endl;
        }
        ~Container(){
            std::cout << "Container destructed" << std::endl;
        }
        //Member variable of our class container
        //every instance has its own copy of this variable
        std::vector<int> m_vector;
};

int main (){

    int i =7;
    float f = 3.14;
    Container myContainer;
    myContainer.m_vector.push_back(1);

    return 0;
}