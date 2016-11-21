
#include <iostream>
#include <vector>
#include <string>
#include "math.h"
#include "stdlib.h"

int calculateFib(int n)
{
    int result = 0;
    
    if (n==0)
        result = 0;
    else if (n==1)
        result = 1;
    else
        result = calculateFib(n-1) + calculateFib(n-2);
    
    return result;
}

int isPrime(int num)
{
    float sqrtofnum = 0.0;
    sqrtofnum = sqrt(num);
    
    if (num==1) return 0;
    else if (num == 0) return 0;
    
    for (int i = 2; i <= sqrtofnum; i++ )
    {
        if (num%i == 0)
            return 0;
    }
    
    return 1;
}

int main(int argc, char* argv[]) {
    int n = 0;
    int count =0;
    std::vector<int> primeFibs;
    std::vector<int>::const_iterator it;
    
    for (int j = 1; j <argc; j++)
    {
        
        n = atoi(argv[j]);
        
        if(n<0)
        {
            std::cout<<"is not a positive number"<<std::endl;
            continue;
        }
        
        while(1)
        {
            
            if (isPrime(calculateFib(count)))
            {
                primeFibs.push_back(calculateFib(count));
                
            }
            count++;
            
            if(primeFibs.size() == n)
                break;
            
        }
        
        for(it = primeFibs.begin(); it != primeFibs.end(); it++)
        {
            std::cout<<*it<<" ";
        }
        
        std::cout<<std::endl;
        
    }
    
    return 0;
}
