class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>twoSum;
        for(size_t its=0;its<nums.size();++its){
            for(size_t jts=0;jts<nums.size();++jts){
                if(its==jts)
                    continue;
                if(target==(nums[its]+nums[jts])){
                    twoSum.push_back(its);
                    twoSum.push_back(jts);
                    return twoSum;
                }
            }
        }
        return twoSum;
    }
};