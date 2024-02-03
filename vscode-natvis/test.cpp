#include <string>
#include <iostream>
class MyClass {    
public:             
    int myNum = 11; 
    std::string myString="myStringValue"; 
};

int main()
{
    MyClass mc;
    std::string s = mc.myString;
    std::cout << s;
    return 0;
}