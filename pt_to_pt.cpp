#include<iostream>
using namespace std;

// pointer to pointer example
int main(){
    int var = 10;
    int *p;
    int **pp;

    p = &var;
    pp = &p;

    cout << "address of the var var"<<endl;
    cout << p<<endl;

    cout << "address of the pointer p" << endl;
    cout <<pp<<endl;
    
}