class Solution {
public:
    vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        
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
        
        
        
        return intersection;
    }
};