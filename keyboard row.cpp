//Keuboard Row ����˼·�������Լ��ķ���̫����������ı��˵��㷨
//�ӷ������ǣ����һ���ַ�������ͬһ�е��ַ���ɵģ���ô�϶�����
//����е��ַ�
//string��find_first_of����Ѱ�ҵ�һ�γ����ڸ����ַ������ַ����±�

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>resu;
        for(auto wor:words){
            bool keybord1=wor.find_first_of("QWERTYUIOPqwertyuiop")==string::npos?false:true;
            bool keybord2=wor.find_first_of("ASDFGHJKLasdfghjkl")==string::npos?false:true;
            bool keybord3=wor.find_first_of("ZXCVBNMzxcvbnm")==string::npos?false:true;
            if((keybord1+keybord2+keybord3)==1)
                resu.push_back(wor);
        }
        return resu;
    }
};