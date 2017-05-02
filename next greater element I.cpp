//You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements
//are subset of nums2. Find all the next greater numbers for nums1's elements in the corresponding places of nums2.
//The Next Greater Number of a number x in nums1 is the first greater number to its right in 
//nums2. If it does not exist, output -1 for this number.
//Input: nums1 = [4,1,2], nums2 = [1,3,4,2].
//Output: [-1,3,-1]
//注意：本题常规思路可以解，但是提示用堆栈，用堆栈会好一些，代码量会少很多，复杂度也会降低
class Solution{
public:
int search(vector<int> &nums,int A)
{
    int i=0;
    for(i=0;i<nums.size();i++)
        if(nums[i] == A)
            break;
    
    if(i == nums.size() || i == nums.size()-1)
        return -1;
    
    for(;i<nums.size();i++)
        if(nums[i] > A)
            return nums[i];
    
    return -1;
}
vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
    
    vector<int> ans(findNums.size());
    for(int i=0;i<findNums.size();i++)
    {
        ans[i] = search(nums,findNums[i]);
    }
    return ans;
}
};