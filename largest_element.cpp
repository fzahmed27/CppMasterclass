#include<iostream>

int main(){
    int arr[] ={3,5,2,1,2,9,6,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int largest_elem = 0;
    if (len==0){
        std::cout<<"Array is empty"<<std::endl;
    }
    else{
        for(int i = 0; i < len; i++){
            if(largest_elem < *(arr+i)){
                largest_elem = *(arr+i);
            }
        }

    }

    std::cout << largest_elem <<std::endl;
}