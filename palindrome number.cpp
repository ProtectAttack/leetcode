//���㷨˼�룺������ת�����ַ��������ַ�����ͷ���м��ж�
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x==0)
            return true;
        string xstr,ystr;
        while(x){
            xstr+=x%10;
            x/=10;
        }
        for(size_t iip=xstr.size()-1,jip=0;(jip!=iip)&&(jip<iip);--iip,++jip){
            if(xstr[jip]!=xstr[iip])
                return false;
        }
        return true;
    }
};