//使用暴力搜索时间复杂度为n^2，使用hash表的查找操作可以把复杂度降为nlogn
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>hash;
        vector<int>twosum;
        for(size_t its=0;its<nums.size();++its){
            int anotherNum=target-nums[its];
            if(hash.find(anotherNum)!=hash.end()){
                twosum.push_back(hash[anotherNum]);
                twosum.push_back(its);
                return twosum;
            }
            hash[nums[its]]=its;
        }
        return twosum;
    }
};