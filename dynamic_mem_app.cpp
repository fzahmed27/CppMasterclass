#include<iostream>

int main(){
    int n =5;
    int *array = new int;

    for(int i=0; i<5;i++){
        array[i] = i;
        std::cout<<array[i]<<std::endl;
    }
    delete[] array;
    array = nullptr;

}