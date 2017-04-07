//Keuboard Row 解题思路：本题自己的方法太繁琐，借鉴的别人的算法
//从反方向考虑，如果一个字符串不是同一行的字符组成的，那么肯定存在
//别的行的字符
//string的find_first_of函数寻找第一次出现在给定字符集的字符的下标

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