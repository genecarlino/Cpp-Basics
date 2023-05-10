#include <iostream>
#include <fstream> //File I/O operations

int main(int argc, char* argv[]){

    std::cout << "argc: " << argc << std::endl;
    for(int i=0; i < argc; i++){
        std::cout << '\t' <<argc[i] << std::endl;
    }

    // std::ofstream outFile;
    // outFile.open("myTextFile.txt");

    // outFile << "Hello World!" << std::endl;
    // outFile << "How are you doing today?" << std::endl;

    // outFile.close();

    return 0;
}