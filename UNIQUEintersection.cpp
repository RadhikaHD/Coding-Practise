#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <set>
 
class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
       
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size();
        int m = nums2.size();
       
        int i, j= 0;
        std::vector<int> intersection;
        while (i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else
            {
                intersection.push_back(nums2[j]);
                i++;
                j++;
            }
        }
       
        /*
         
         std::vector<int>::interator it = std::unique(intersection.begin(), intersection.end());
         intersection.erase(it, intersection.end());
         return intersection;
         */
       
        std::set<int> S(intersection.begin(), intersection.end());
        std::vector<int> out(S.begin(), S.end());
        return out;
       
   
    }
};

int main() {
	
	static const int arr1[] = {1,1,2,1,2,4,5,6,1,2,3,4};
	static const int arr2[] = {1,2,15,2362,32,2};

    std::vector<int> vec1 (arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]) );
    std::vector<int> vec2 (arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]) );

	Solution s;
	std::vector<int> V = s.intersection(vec1, vec2);
    
    for (std::vector<int>::iterator it = V.begin(); it != V.end(); it++){
        std::cout << *it << std::endl;
    }
}   
