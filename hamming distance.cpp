//��������  ���˼�룺����������Ժ�Ľ��תΪ��������1�ĸ���

class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<31>xxory=x^y;
        return xxory.count();
    }
};