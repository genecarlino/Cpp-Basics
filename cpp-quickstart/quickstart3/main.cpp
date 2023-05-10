#include <iostream>
#include <fstream> //File I/O operations
#include <string> // std::string

int main(int argc, char* argv[]){

    //std::cout << "argc: " << argc << std::endl;
    if(argc < 2){
        std::cout << "Please specify a file name"
                  << std::endl
                  << "e.g. ./prog filename.txt"
                  << std::endl;
        return 0;
    }
    std::ifstream inputFile;
    inputFile.open(argv[1]);
    if(inputFile.is_open()){
        std::string line;
        std::getline(inputFile, line);
        std::cout <<line;
        std::getline(inputFile, line);
        std::cout <<line;
       

    inputFile.close();


    return 0;
    }

    // std::ofstream outFile;
    // outFile.open("myTextFile.txt");

    // outFile << "Hello World!" << std::endl;
    // outFile << "How are you doing today?" << std::endl;

    // outFile.close();

    return 0;
}