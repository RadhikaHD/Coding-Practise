/* string str() const;
 void str (const string& s); */

#include <iostream>
#include <sstream>

int main() {
    std::string s;
    double x = 2.5;
    std::stringstream strm;
    strm << x+1; // access stream and add stuff
    s = strm.str(); // str() is a public member fuction and it returns the string object with a copy of the current contents of the stream
    std::cout << strm.str() << std::endl; // print
    strm.str("");
    strm.clear();
    strm << 8;
    std::cout << strm.str() << std::endl;
}