#include<iostream>


int main(){
    int arr[5]= {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    // size of array = 5*4 bytes = 20 bytes, size of first element = 4 bytes, no. of elements = 5

    for(int i=0;i<length;i++){
        int array_element= arr[i];
        std::cout << array_element<<std::endl;

    }

}