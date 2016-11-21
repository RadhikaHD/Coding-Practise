//
//  main.cpp
//  practise
//
//  Created by Radhika Hansraj Dhaipule on 11/14/15.
//  Copyright © 2015 Radhika Hansraj Dhaipule. All rights reserved.
//

/* const string string::operator+(const string& rhs) const {
string sum(strlen(buf)+rhs.size()+1);
strcpy(sum.buf, buf);
strcat(sum.buf,rhs.buf);
return sum;
}
 */


#include <iostream>
#include <cstring>

class string
{
public:
    string(int n= 0): buf (new char[n+1])
    {
        buf[0] = '\0';
        std::cout<<"default"<<std::endl;
    }
    
    string(const char* q): buf (new char[strlen(q)])
    {
        strcpy(buf, q);
        std::cout<<"convert"<<std::endl;
    }
    
    string(const string& t)
    {
        buf = new char [strlen(t.buf)];
        strcpy(buf, t.buf);
        std::cout<<"copy"<<std::endl;
        
    }
    
    ~string()
    {
        delete [] buf;
        std::cout<<"destruct"<<std::endl;
    }
    
    string& operator=(string& s)
    {
        std::cout<<"assignment"<<std::endl;
        char* buf1 = buf;
        buf = new char[strlen(s.buf)];
        delete buf1;
        return *this;
    }
    
    string& operator+(string& s)
    {
        std::cout<<"plus"<<std::endl;
        string plus;
        plus.buf = new char [strlen(buf)+ strlen(s.buf)];
        strcpy(plus.buf, buf);
        strcat(plus.buf, s.buf);
        return plus;
    }
    
    friend std::ostream& operator<<(std::ostream& os, string& s);
   
    
    
    char* getBuf()
    {
        return buf;
    }
    
    void setBuf( char*)
    {
        
    }
    
private:
    char* buf;
    
};

std::ostream& operator<<(std::ostream& os, string& s)
{
    os<<s.getBuf();
    std::cout<<"output"<<std::endl;
    return os;
}

int main2()
{
    string a(1);
    std::cout<<a<<std::endl;
    string b("cat");
    
    std::cout<<b<<std::endl;
    string d("alog");
    string c(b);
    c = b+d;
    std::cout<<c<<std::endl;
    
    return 0;
}
