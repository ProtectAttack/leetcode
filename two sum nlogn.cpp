//ʹ�ñ�������ʱ�临�Ӷ�Ϊn^2��ʹ��hash��Ĳ��Ҳ������԰Ѹ��ӶȽ�Ϊnlogn
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