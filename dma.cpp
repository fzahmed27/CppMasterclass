#include <stdio.h>
#include <iostream>

int main(){
    int n = 6;
    int *array = new int;

    for (int i=1; i<n; i++){
        array[i]=i+i;
        std::cout<<array[i]<<std::endl;
    }
    delete array;
    array = nullptr;
}