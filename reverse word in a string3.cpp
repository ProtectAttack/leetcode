//字符串反转问题Given a string, you need to reverse the order of characters 
//in each word within a sentence while still preserving whitespace and initial word order.
//Input: "Let's take LeetCode contest"
//Output: "s'teL ekat edoCteeL tsetnoc"

class Solution {
public:
    void reverse(string &word,int start,int end){
        for(int i=start,j=end;i<j;++i,--j){
            char ctem=word[i];
            word[i]=word[j];
            word[j]=ctem;
        }
    }
    string reverseWords(string s) {
        for(int i=0,j=0;j<=s.size();++j){
            if((s[j]==' ')||(j==s.size())){
                reverse(s,i,--j);
                i=j+2;
                j++;
            }
        }
        return s;
    }
};