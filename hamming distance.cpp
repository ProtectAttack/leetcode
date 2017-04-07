//汉明重量  求解思想：两个数异或以后的结果转为二进制中1的个数

class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<31>xxory=x^y;
        return xxory.count();
    }
};