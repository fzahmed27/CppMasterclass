#include<iostream>
#include<fstream>


int main(){
    std::ofstream file_out("output1.txt");
    file_out<<"Hello Word\n";
    file_out<<"I will be very good at programming\n";
    file_out<<"I am not afarid to fail";

    std::ifstream file_in("Example.txt");
    std::string line;
    while (getline (file_in, line)){
        std::cout<<line<<"\n";
    }

    
}