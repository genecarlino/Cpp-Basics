// Creator:  Gene 
#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <vector>
#include <string>

//this is the interface
struct Container{
    Container(std::string name);
    ~Container();
    void AddData(int i);
    void PrintData();

private:
        std::vector<int> m_vector;
        std::string m_name;
};

#endif