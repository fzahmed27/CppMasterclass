#include<iostream>
using namespace std;

// example of pass by reference function 
void updateValue(int *p){
    *p =*p+5; // the *p is the value of the address stored here
   
}

int main(){
    int x = 10;
    updateValue(&x);
    cout << "updated Value"<< endl;
    cout << x <<endl;
}
