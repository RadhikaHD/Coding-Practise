#include <iostream>
#include <cstdlib>
#include <list>

class Integer
{
public:
    Integer(int n): stuff( new int)
    {
        (*stuff)= n;
    }
    
    ~Integer()
    {
        delete stuff;
    }
    
    int* getStuff() const
    {
        return stuff;
    }
    
    void setStuff(int n)
    {
        (*stuff)= n;
    }
private:
    int *stuff;
};

void removeOdd(std::list<Integer*> &n)
{
    std::list<Integer*>::iterator iter = n.begin();
    while(iter != n.end())
    {
        if (*((*iter)->getStuff()) % 2==0)
        {
            delete (*iter);
            iter=  n.erase(iter);
            
        }
        else
        ++iter;
    }
    
}

void clean(std::list<Integer*> &n)
{
    std::list<Integer*>::iterator iter1 = n.begin();
    while (iter1 != n.end())
    {
        delete (*iter1);
        ++iter1;
    }
    
}

void print(std::list<Integer*> &n)
{
    std::list<Integer*>::iterator iter = n.begin();
    while(iter != n.end())
    {
            std::cout<<(*(*iter)->getStuff())<<std::endl;
            iter++;
    }
}

int main6()
{
    std::list<Integer*> numbers;
    for(unsigned int i =0; i< 10; ++i)
    {
        numbers.push_back(new Integer(rand()%100));
    }
    
    print(numbers);
    
    removeOdd(numbers);
     print(numbers);
    clean(numbers);
     //print(numbers); - it doesn't have anything to print so bad access
    return 0;
}