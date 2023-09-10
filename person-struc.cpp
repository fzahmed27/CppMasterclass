#include<iostream>
#include<string>

int main(){
    struct Person{
        std::string name;
        int age;
        std::string address;
    };

    Person my_person;
    my_person.name = "Firoz";
    my_person.age = 22;
    my_person.address = "california";

    std::cout<<"My name is "<< my_person.name<< "," << my_person.age << "," << my_person.address <<std::endl;
}