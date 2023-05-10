#include <iostream>
#include <fstream> //File I/O operations
#include <string> // std::string
#include <sstream> // std::stringstream

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
        //Temp storage for each line
        std::string line;
        //while loop to read in the data
        while(std::getline(inputFile, line)){
            //question why 0? it effects more than line 0
            if(line[0] == '#'){
                //do nothing
            }else{
            //construct a string stream from out line
            std::stringstream stream (line);
            //break out each individual component
            //based off of spaces
            std::cout <<line<<std::endl;
            }
        }
        
    }
    inputFile.close();


    return 0;

    // std::ofstream outFile;
    // outFile.open("myTextFile.txt");

    // outFile << "Hello World!" << std::endl;
    // outFile << "How are you doing today?" << std::endl;

    // outFile.close();

    return 0;
}