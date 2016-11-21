//
//  insertmaps.cpp
//  practise
//
//  Created by Radhika Hansraj Dhaipule on 11/17/15.
//  Copyright © 2015 Radhika Hansraj Dhaipule. All rights reserved.
//


#include <iostream>
#include <map>

void initialise ( std::map <int, int> mp)
{
    for (int i = 0; i < 10; i++)
    {
        mp[i] = rand()%100;
    }
}

int main6()
{
    std::map <int, int> mp;
    initialise(mp);
    std::cout<<mp.size()<<std::endl;
    return 0;
    
}