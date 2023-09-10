#include<iostream>
using namespace std;
int main(){
    int var = 30;
    int *ip; //initiliaze the pointer

    ip = &var; // store the address of the variable in the pointer

    cout << "value of var variable"<<endl;
    cout<< var<<endl;
    
    cout <<"Address of stored variable"<<endl;
    cout<< ip<<endl;

    cout <<"value of *ip pointer"<<endl;
    cout<<*ip<<endl;

    return 0;

}