//submission details ����˼·������˼·�⼴��
//ע�Ȿ�ⷨ�е�to_string��������C++11��׼��ʼ����ʹ��

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