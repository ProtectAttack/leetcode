//注意：对于这个问题，自己的算法太繁琐，借鉴别人的算法
class Solution {
public:
    int reverse(int x) {
        long long result=0;
        while(x){
            result=result*10+x%10;
            x/=10;
        }
        return (result<INT_MIN||result>INT_MAX)?0:result;
    }
};