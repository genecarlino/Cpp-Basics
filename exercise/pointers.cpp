// Compile with:
// g++ -std=c++17 pointers.cpp -o prog
#include <iostream>
#include <vector>

int main(int argc, char** argv){


  //creating a pointer to nothing
  int* px = nullptr;

  //creating a variable to point to
  int x = 7;

  //Now we use the 'assignment operator' to point to x
  px = &x;

  //defreferencing px to get the value of the thing it points too
  std::cout << "px dereferenced is =" <<*px << "\n";

  // Pointers can be tricky.
  // 
  // Feel free to use tools like valgrind and gdb to help you debug.




	return 0;
}

// Pointers can be 'Tricksy' sometimes--so practice now!
// https://www.asciiart.eu/books/lord-of-the-rings
//         .';:;'.
//        /_' _' /\   __
//        ;a/ e= J/-'"  '.
//        \ ~_   (  -'  ( ;_ ,.
//         L~"'_.    -.  \ ./  )
//         ,'-' '-._  _;  )'   (
//       .' .'   _.'")  \  \(  |
//      /  (  .-'   __\{`', \  |
//     / .'  /  _.-'   "  ; /  |
//    / /    '-._'-,     / / \ (
// __/ (_    ,;' .-'    / /  /_'-._
// `"-'` ~`  ccc.'   __.','     \j\L
//                 .='/|\7      
//     snd           ' `
