#include <iostream>

void SetValue(int& param){
    param = 9999;
    std::cout << "&alias: " << &(param) << std::endl;
}

void SetValuePassingInAPointer(int* p){
    *p = 123456;
}

int main(){

    int x = 10;
    std::cout << "&x :" << &x << std::endl; 


    SetValue(x);
    //store the memory location of 'x' in 'ptr'
    int* p_x = &x;
    
    SetValue(x);
    std::cout << "SetValue(x): " << x << std::endl;
    SetValuePassingInAPointer(&x);
    std::cout << "SetValuePassingInAPointer(&x): " << x << std::endl;
    return 0;
}

//video:https://www.youtube.com/watch?v=P2_z98wEU6M&list=PLvv0ScY6vfd-R9N-vIDXdd4HO9IYATIxJ&index=5