// Compile with:
// g++ -std=c++17 input.cpp -o prog
#include <iostream>
#include <fstream>
#include <string> //new lib for us! 

int main(int argc, char** argv){

  //open file to output
  std::ifstream inFile;

  if (argc != 2){
    std::cerr << "Wrong number of arguments.\n";
    std::cerr << "ProgramName file_path.\n";
    return 0;
  }
//i do not understand why we are using argv[1] here
  inFile.open(argv[1]);
  std::cout << "argv[1] = " << argv[1] << std::endl;

  if (!inFile.is_open()){
    std::string line; //string object
    while (getline(inFile,line)){
      std::cout << line << std::endl;
    
    }
  }else{
    std::cout << "Filepath does not exist" << argv[1] << std::endl;
	  std::cout << "Make sure the path is relative to where you are executing your program" << std::endl;
  }

  inFile.close();  
	return 0;
}
