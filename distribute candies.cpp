//distribute candies���ж��n��ż�������⣬��Щ�����ж���m��ÿ�ֵ�������ж�飬��
//��Щ����ƽ����������ͬ��������Բ�ͬ���ָ��������ã��ʣ����������Էֵü��ֵ��⣿
//�ⷨ��ץס���ģ��������m>n/2�����������ֵ�n/2�֣���m<n/2�����������ֵ�m��
class Solution {
public:
	int distributeCandies(vector<int>& candies) {
		unordered_set<int>candi_set;
		for (auto can : candies) {
			candi_set.insert(can);
		}
		return min(candi_set.size(), candies.size() / 2);
	}
};