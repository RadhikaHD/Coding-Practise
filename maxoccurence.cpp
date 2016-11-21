#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int a[] = {1,2,3,4,1,3,4,2,4,5,6,3,5,6};

    std::vector<int> nums1 (a, a + sizeof(a) / sizeof(a[0]) );
    
    
    std::vector<int>::size_type size = nums1.size();
 

    std::sort(nums1.begin(), nums1.end());
    
    int maxfreq, freq, maxindex = 0;
  
    for (int i = 0; i <size; i++)
    {
        //std::cout<<*it<<std::endl;
        if(nums1[i]==nums1[i+1])
        {
            
            freq++;
            
            if(freq>maxfreq)
            {
                maxfreq= freq;
                maxindex= i;
            }
           // std::cout<<"maxfreq"<<maxfreq<<std::endl;
            
        }
        else
            freq= 1;
    }
    
    std::cout<<maxfreq<<std::endl;
    std::cout<<"mode: "<<nums1[maxindex]<<std::endl;
    
}