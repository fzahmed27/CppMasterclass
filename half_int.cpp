#include<iostream>
using namespace std;

// takes an integer input and half the value of integer
void halveValue(int *p){
    *p = *p/2;
}

int main(){
    int x = 97;
    halveValue(&x);
    cout << "Half of the integer "<< endl;
    cout << x<<endl;

}