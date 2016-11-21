#include <iostream>
#include <vector>
#include <algorithm>

class point{
public:
    int x,y;
    
    point()
    {
        x=0;
        y=0;
    }
    
    point(int x1, int y1):x(x1), y(y1)
    {

    }
    
    ~point()
    {
        
    }
};

bool doesoverlap(const point &a1,const point &b1,const point &a2,const point &b2 )
{
    
    if(a1.x>b2.x || a2.x>b1.x)
        return false;
    if(b1.y>a2.y || b2.y>a1.y)
        return false;
    return true;
}

int main()
{
    point a1(1,1), a2(55,43), b1(0,0), b2(166,112)  ;
    if(doesoverlap(a1,b1,a2,b2))
        
        std::cout<<"does overlap"<<std::endl;
    else
        std::cout<<"doesn't overlap"<<std::endl;
        
    return 0;
    
}