// g++ -std=c++17 vector.cpp -o prog
#include <iostream>
#include <vector>

int main(int argc, char** argv){

  // Understanding how to use a std::vector will probably
  // get you through about 80% of the course.
  // Start getting practice now by typing out the example and
  // playing with it a bit.


  //vector that stores unsigned chars data
  std::vector<unsigned char> myData;

  //adding data to the vector
  for(unsigned int i = 65; i < 91; ++i){
    myData.push_back(i);
  }

  //iterate through our container struct
  //print out the data in our vector
  for(unsigned int i = 0; i < myData.size(); ++i){
    std::cout << myData[i] << std::endl;


    return 0;
}
}
//whats this supposed to print out?