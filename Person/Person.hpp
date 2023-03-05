#include <iostream> 
#include <string>

/* 
The {} initializes the variables to their default values, 
which is 0 for integers. This is a C++11 feature known as "uniform initialization syntax". 
Prior to C++11, the variables would have been initialized by default to an unspecified value.
*/

class Person {
    int age; 
    std::string name; 
    public: 
        Person() {
            std::cout << "Default constructor is called" << std::endl; 
            name = "Unknown";
            age = 0; 
        }  
        Person(std::string n, int a) {
            std::cout << "Parameterized constructor is called" << std::endl; 
            name = n; 
            age = a; 
        }
        void print_the_age();  
        void print_the_name(); 
}; 
