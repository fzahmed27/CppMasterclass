
#include<iostream>
#include<fstream>

int main(){
    std::ofstream myFile("Example.txt");
    if (myFile.is_open()){
        myFile << "This is my first sentence\n";
        myFile << "This is another line";
        myFile.close();
    } else {
        std::cout << "Unable to open file";
    }
    return 0;
}