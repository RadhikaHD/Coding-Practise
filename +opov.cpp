//
//  main.cpp
//  practise
//
//  Created by Radhika Hansraj Dhaipule on 10/11/15.
//  Copyright © 2015 Radhika Hansraj Dhaipule. All rights reserved.
//

#include <iostream>

class string
{
public:
    
    string()
    {
        std::cout<<"default"<<std::endl;
    }
    
    string( const char*)
    {
        std::cout<<"convert"<<std::endl;
    }
    
    string( const string&)
    {
        std::cout<<"copy"<<std::endl;
    }
    
    ~string()
  
        {
        std::cout<<"destructor"<<std::endl;
        }
    
    string& operator=(const string&)
    {
        
            std::cout<<"assign"<<std::endl;
        return *this;
       
    }
};



class Student
{
public:
    Student( const char* n)
    {
        name = n;
    
    }
    
private:
    string name;
};

int main(int argc, const char * argv[]) {
    /* insert code here...
    //std::cout << "Hello, World!\n"; */
    
    Student s("effective c++");
    
     
  return 0;
}
