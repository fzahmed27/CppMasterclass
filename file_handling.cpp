#include<iostream>
#include<fstream>
#include<string>
int main(){
    std::ofstream file_out("output.txt");
    file_out<< "Hello World\n";
    file_out<<"My name is Firoz A. I want to be 10X programmer\n";
    file_out.close();

    std::ifstream file_in("sample.txt");
    std::string line;
    while (getline (file_in, line)){
        std::cout<<line<< "\n";

    } 
    file_in.close();

}