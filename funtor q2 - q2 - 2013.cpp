#include <iostream>
#include <string>
#include <algorithm>
#include <list>

class Shape
{
public:
    Shape(): shape() {}
    Shape(const std::string& s): shape(s) {}
    Shape(const Shape& s):shape(s.shape) {}
    
    const std::string& getShape() const { return shape; }
   /* bool operator<(const Shape* rhs) const // not working fix later
    {
        return shape< rhs->getShape();
    } */
    
    friend std::ostream& operator<<( std::ostream& o, const Shape* s);
    
private:
    std::string shape;
};

class Numberless
{
public:
    bool operator()(const Shape* lhs, const Shape* rhs) const
    {
        return lhs->getShape()<rhs->getShape();
    }
};

std::ostream& operator<<( std::ostream& o, const Shape* s)
{
    return o<<s->getShape();
}

void print( const std::list<Shape*>& shapes)
{
    std::list<Shape*>::const_iterator iter = shapes.begin();
    while(iter!= shapes.end())
    {
        std::cout<<(*iter)<<",";
        ++iter;
    }
    std::cout<<std::endl;
}

int main5()
{
    std::list <Shape*> shapes;
    shapes.push_back(new Shape("square"));
    shapes.push_back(new Shape("oval"));
    shapes.push_back(new Shape("round"));
    shapes.push_back(new Shape("triangle"));
    shapes.push_back(new Shape("rectangle"));
    
    shapes.sort(Numberless());
    print(shapes);
    return 0;
}