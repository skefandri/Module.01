#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string* ptr = &str;
    std::string &ref = str;

    std::cout << "Adress of The string: " 
            << &str <<std::endl << "The Adress of Ptr: " 
            << &ptr <<std::endl << "The Adress of Reference "
            << &ref << std::endl;

    std::cout<<"\n\n";

    std::cout << "The Value of String: " << str << std::endl 
        << "The value of Ptr: " << *ptr << std::endl
        << "The Value of reference: " << ref << std::endl;
}