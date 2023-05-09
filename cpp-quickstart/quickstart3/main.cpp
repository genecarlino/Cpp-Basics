#include <iostream>
#include <fstream> //File I/O operations

int main(){

    std::ofstream outFile;
    outFile.open("myTextFile.txt");

    outFile << "Hello World!" << std::endl;
    outFile << "How are you doing today?" << std::endl;

    outFile.close();

    return 0;
}