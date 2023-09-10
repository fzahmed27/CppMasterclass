#include<iostream>


int main(){
    int n = 5;
    int *arr = new int;

    for (int i=0; i<n;i++){
        arr[i]=i*i;
        std::cout<<arr[i]<<std::endl;
    }
    delete [] arr;
    arr = nullptr;
    return 0;
}