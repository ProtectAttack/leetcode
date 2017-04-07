//submission details 解题思路：正常思路解即可
//注意本解法中的to_string函数，从C++11标准开始可以使用

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>fizzbuzz(n);
        for(int i=1;i<n+1;++i){
            if(i%3==0){
                fizzbuzz[i-1]+="Fizz";
            }
            if(i%5==0){
                fizzbuzz[i-1]+="Buzz";
            }
            if((i%15!=0)&&(i%3!=0)&&(i%5!=0)){
                fizzbuzz[i-1]+=to_string(i);
            }
        }
        return fizzbuzz;
    }
};