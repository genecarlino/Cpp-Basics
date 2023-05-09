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
void AddData(int i){
    m_vector.push_back(i);
}

void PrintData(){
    for (int i = 0; i < m_vector.size(); i++){
        std::cout << m_vector[i] << std::endl;
    }
}

private:
        std::vector<int> m_vector;
};

int main (){

    int i =7;
    float f = 3.14;
    Container myContainer;
    myContainer.AddData(1);
    myContainer.AddData(2);
    myContainer.AddData(3);
    myContainer.PrintData();

    return 0;
}

