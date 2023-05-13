// g++ -std=c++17 class.cpp -o prog

#include <cstdint>



    // You know what you need to do... :) Type it out.
    //
    //
    // Here's something I found funny as a reward:
    // https://stackoverflow.blog/2021/04/19/how-often-do-people-actually-copy-and-paste-from-stack-overflow-now-we-know/
    //
    // (Stack overflow is good too--but copying and pasting doesn't help us learn)
    //
    //
    // Anyway, at this point you know most of the C++ you'll need to get you through the course.

class PPM{
    public: //

    //constructor 
    PPM(unsigned int width, unsigned int height){
        //allocate some memory
        pixelData = new unsigned char[width*height*3];
    }

    //Destructor called when the object is destroyed
    ~PPM(){
        //free the memory
        delete[] pixelData;
    } 

    private:
        uint8_t* pixelData;
};


int main(){
    PPM myPPM(64,128);
    return 0;
}


