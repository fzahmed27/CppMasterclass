#include<iostream>
using namespace std;

// swap two integers 
void swapInt(int *p, int *r){
    int temp = *r;
    *r = *p;
    *p = temp;
}
int main(){
    int x=100, y=500;
    swapInt(&x, &y);
    cout << "Value of x is"<<endl;
    cout << x<<endl;
    cout << "Value of y is"<<endl;
    cout << y<<endl;

}