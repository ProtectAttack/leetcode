//求补  解题思想：num和它的补数的和等于2^n-1
class Solution {
public:
    int findComplement(int num) {
        int n=0;
        while(pow(2,n)<=num){
            n++;
        }
        return pow(2,n)-num-1;
    }
};