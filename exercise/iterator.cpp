// Compile with:
// g++ -std=c++17 iterator.cpp -o prog
#include <iostream>
#include <vector>

int main(int argc, char** argv){


    // Create a vector which stores
    // 'unsigned char' data.
    std::vector<unsigned char> myData;
    
    // Add data into our vector.
    for(unsigned int i = 65; i < 91; ++i){
        myData.push_back(i);
    }

	//iterating through 
	//creat the iterator and point it to the start of our data
	std::vector<unsigned char>::iterator it = myData.begin(); 
	//points the iterator to the end of our data
	std::vector<unsigned char>::iterator end = myData.end();
	//move forward one element at a time in our data 
	for(; it != end; ++it){
		//note- the iterator is dereferenced to get the value
		std::cout << *it << std::endl;
	}
	



  	// Wow you are learning so much already by typing out these examples.
	//
	// Folks in the C++ world 'swear' by iterators.
	// (And I sort of agree). But in this course, it's enough to just know they exist
	// and you can start building a habit out of using them now.

	return 0;
}
