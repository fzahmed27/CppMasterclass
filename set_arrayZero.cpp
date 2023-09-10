#include<iostream>

int main(){
    int arr[] ={1,2,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < len; i++){
        *(arr+i) = 0;
    }

    // Print the array
    for(int i = 0; i < len; i++){
        std::cout << *(arr + i) << " ";
    }

    std::cout << std::endl;
}
