#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <set>
#include <string>
 

int main() {
	
	
    std::string str1("hello there");
    std::string str2("hellow");
    if (str1.find(str2) != std::string::npos)
        std::cout<<"found"<<std::endl;
    else
        std::cout<<"not found"<<std::endl;
}
