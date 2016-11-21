#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Number
{
public:
    
    Number(int n): number(n){}
    int getNumber()
    {
        return number;
    }
    
    void setNumber(int n)
    {
        number = n;
    }
    
private:
    int number;
};

void initialise(std::vector<Number*>& nums)
{
    for(int i = 0; i<10; i++)
    {
        nums.push_back(new Number(rand()%100));
    }
}

void removeEvens(std::vector<Number*>& nums)
{
   std::vector<Number*>:: iterator iter1 = nums.begin();
    std::vector<Number*>:: iterator last = nums.end();
    --last;
    
    while (iter1 != last)
    {
        if ( ((*iter1)->getNumber())%2 ==0)
        {
            int temp = (*iter1)->getNumber();
            (*iter1)->setNumber((*last)->getNumber());
            (*last)->setNumber(temp);
            --last;
            
        }
            else
                ++iter1;
    }
    
    nums.erase(last, nums.end());
}

void sort(std::vector<Number*>& nums)
{
    
}

void print(std::vector<Number*>& nums)
{
    std::vector<Number*>:: iterator iter = nums.begin();
    while (iter != nums.end())
    {
        std::cout<< (*iter)-> getNumber()<<std::endl;
        ++iter;
    }
}

int main()
{
    std::vector<Number*> numbers;
    initialise(numbers);
    print(numbers);
    removeEvens(numbers);
    
    //sort(numbers);
    print(numbers);
    
    return 0;
}