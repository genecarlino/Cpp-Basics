// g++ -std=c++17 memory.cpp -o prog
#include <iostream>
#include <vector>


int main(int argc, char** argv){

  // We'll have to get comfortable with working with memory.
  //
  // Eventually we'll be passing around memory from the CPU to GPU and back.
  //
  // That's why I am so adamant you type out the examples now and get practice in early.
  //
  // You can add more to them too--that's the best way to learn!

  //this is an array? but its a contiguous chunk of memory?
  uint8_t* contiguous_chunk_of_memory = new uint8_t[80];

  //sometimes we want to just allocate one item too. 
  uint8_t* one_item = new uint8_t;

  //cannot determine the size because ?
  std::cout << "sizeof(contiguous....)=" <<sizeof(contiguous_chunk_of_memory) << std::endl;
  //should just returnt he size of the data type, which is a pointer 

  //important to delete this chink of memory 

  //two ways to do this 
  // delete - for single item 
  //delete[] - for an entire contig chunk of memory 
  delete one_item;
  delete[] contiguous_chunk_of_memory;



    return 0;
}
