//�ַ�����ת  ����˼·���������˼·����ʱ��̫�࣬Ϊn
//ʹ���������������������м���У�ʱ��Ϊn/2

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