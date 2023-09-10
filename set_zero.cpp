#include<iostream>

void setZero(int *p){
    *p = 0;
}

int main(){
    int x =10;
    setZero(&x);
    std::cout<<x<<std::endl;

}