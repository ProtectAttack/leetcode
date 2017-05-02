//You're given a matrix represented by a two-dimensional array, and two positive integers r and c 
//representing the row number and column number of the wanted reshaped matrix, respectively.
//The reshaped matrix need to be filled with all the elements of the original matrix in the same 
//row-traversing order as they were.
//ע�⣬������ֻ������������Ԫ�ظ������ʱ�ſ���ת��
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
	int m = nums.size();
	int n = nums[0].size();
	if (m*n != r*c)
		return nums;
	vector<vector<int>>res(r, vector<int>(c, 0));//����һ���µľ���
	for (int i = 0; i < r*c; i++) {
		res[i / c][i%c] = nums[i / n][i%n];
	}
	return res;
    }
};