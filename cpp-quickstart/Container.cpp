#include <iostream> //I/O Stream
#include <vector>
#include <string>
#include "Container.hpp"

Container::Container(std::string name){
            m_name = name;
            std::cout << "Container constructed" << std::endl;
        }
Container::~Container(){
            std::cout << "Container destructed" << std::endl;
        }
        //Member variable of our class container
        //every instance has its own copy of this variable

void Container::AddData(int i){
    m_vector.push_back(i);
}

void Container::PrintData(){
    for (int i = 0; i < m_vector.size(); i++){
        std::cout << m_vector[i] << std::endl;
    }
}
