#include <iostream>
#include <string>



class Compare
{
public:
    virtual bool operator()( const std::string& lhs, const std::string& rhs) const = 0;
};

class CompareLessThan: public Compare
{
    
public:
    virtual bool operator()( const std::string& lhs, const std::string& rhs) const
    {
        return lhs<rhs;
    }
    
};

class Container
{
public:
    
    Container(const Compare* c): nextItem(0), comp(c){}
    void add(const std::string& s)
    {
        stuff[++nextItem] = s;
    }
    void sort();
    void print()
    {
        for (int i =0; i<size(); i++)
        {
            std::cout<<stuff[i]<<std::endl;
        }
    }
    int size() const
    {
        return nextItem;
    }
    
    const Compare* comp;
    
private:
    int nextItem;
    std::string stuff[10];
    
};

void Container::sort() {
    int i, j, first;
    std::string temp;
    int length = size();
    for (i= length - 1; i > 0; i--) {
        first = 0;
        for (j=1; j<=i; j++) {
            if ((*comp )(stuff[j] , stuff[first]))
            {
                first = j;
            }
        }
        temp = stuff[first];
        stuff[first] = stuff[i];
        stuff[i] = temp;
    }
}

int main7()
{
    Container container(new CompareLessThan);
    container.add("apple");
    container.add("banana");
    container.add("carrot");
    container.add("body");
    container.add("motion");
    container.sort();
    container.print();
    
    return 0;
    
    }
