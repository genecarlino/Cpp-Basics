// Compile with:
// g++ -std=c++17 string.cpp -o prog
#include <iostream>
#include <string>

int main(){

  //create string
  std::string fullName = "Gene Carlino";

  //store a portion of the string
  std::string firstName = fullName.substr(0,4);
  std::string lastName = fullName.substr(5);

  //print out the strings
  std::cout << "Full Name: " << fullName << std::endl;
  std::cout << "First Name: " << firstName << std::endl;
  std::cout << "Last Name: " << lastName << std::endl;

  unsigned int i = 0;
  while(i < fullName.length()){
    if(fullName.at(i)==' '){
      //break from loof @ a space
      break;
    }
    std::cout << fullName[i];
    ++i;
  }

  // Type out the example.
  // We'll work with std::strings a lot to parse and manipulate data.

	return 0;
}
