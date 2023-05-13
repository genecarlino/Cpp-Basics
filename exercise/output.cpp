// Compile with:
// g++ -std=c++17 output.cpp -o prog
#include <iostream>
#include <fstream>

int main(int argc, char** argv){

  // I hope you are typing out the examples and experimenting. - yes i am!
  
  //opens a file to output
  std::ofstream outFile;

  //write to a new file called temp.txt
  //overwrites previous file if exists
  //creates if doesnt exist
  outFile << "# Some image data" << std::endl;
  outFile << "P3" << std::endl;

  //Closes the file we are streaming data to 
  outFile.close();

	return 0;
}
