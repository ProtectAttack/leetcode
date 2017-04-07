//字符串反转  解题思路：常规解题思路花费时间太多，为n
//使用两个变量，从两端向中间进行，时间为n/2

class Solution {
public:
    string reverseString(string s) {
        int starts=0,ends=s.size()-1;
        while(starts<=ends){
            swap(s[starts++],s[ends--]);
        }
        return s;
    }
};