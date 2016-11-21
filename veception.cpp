#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
	
std::vector<std::vector<int>> vecofvec;
vecofvec.reserve(5);
std::vector<int> each;
each.reserve(5);

std::vector<std::vector<int>>::interator iter = vecofvec.begin();
std::vector<int>::interator iter1 = each.begin();

while (iter1!= each.end())
{
each.push_back(rand()%10);
}

while (iter!= vecofvec.end())
{
vecofvec.push_back(each);
}


std::vector<std::vector<int>>::interator iter2 = vecofvec.begin();
while (iter2!= vecofvec.end())
{
	
	std::vector<int>::interator iter3 = each.begin();
	while (iter3!= each.end())
	{
		iter3 = each.erase(iter3);
	}
	iter2 = vecofvec.erase(iter2);
}	

 return 0;
}
