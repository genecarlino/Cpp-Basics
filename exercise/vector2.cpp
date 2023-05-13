// g++ -std=c++17 vector2.cpp -o prog
#include <iostream>
#include <vector>



  // You need to understand what is going on with sizeof.
  // This exercise exists because on average, 25% of folks
  // are going to try to use 'sizeof' and expect to get the number
  // of elements in a vector, rather than the size of the underlying data type.

int main(int argc, char** argv){
//create vector for unsigned char data
std::vector<unsigned char> myVector;

  for(unsigned int i= 0; i < 91; ++i){
    myVector.push_back(i);
  }

std::cout << "(Number of element) myVector.size()              = " << myVector.size()<< std::endl;
std::cout << "(Size of underlying data type) sizeof(myVector)  = " << sizeof(myVector) << std::endl;
std::cout << "(raw array myVector is built ontop of) sizeof(myVector.data()) = " << sizeof(myVector.data()) << std::endl;
std::cout << "(Number of elements) sizeof(myVector.data())/sizeof(myVector.data()[0]) = " << sizeof(myVector.data())/sizeof(myVector.data()[0]) << std::endl;
std::cout << std::endl;



  int rawArray[100];
  std::cout << "locally allocated, i.e. stack allocated array) sizeof(rawArray)=" << sizeof (rawArray) << std::endl;
  std::cout << std::endl; 

  // //comparing the raw array to a heap allocated array
  // int* heapArray = new int[100];
  // //heap array is a pointer, size of will return the size of a pointer type, 8 bytes
  // std::cout << "heap allocated array, (i.e. pointer to a chunk of memory) sizeof(heapArray)=" << sizeof(heapArray) << std::endl;


//WHYYYYY
  // Compare the raw array to a heap allocated array
	int* heapArray = new int[52];
	// In this case, because heapArray is a pointer, sizeof will only return the size of a pointer type, usually 8 bytes.
	std::cout << "heap allocated array, (i.e. pointer to a chunk of memory) sizeof(heapArray)= " << sizeof(heapArray) << std::endl;
	std::cout << std::endl;	

  delete[] heapArray;


}


