#include<iostream>


int main(){

    //dynamica allocation of memory
    int *my_int = new int;
    *my_int = 5;

    std::cout<< "My interger "<< *my_int<< std::endl;

    //dynamic allocation of float
    float *my_float = new float;
    *my_float = 25.5;

    std::cout<< "My Float "<< *my_float<< std::endl;

    //delete  from memory
    delete my_int;
    my_int = nullptr;

    delete my_float;
    my_float = nullptr;

    return 0;

}

 