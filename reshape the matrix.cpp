//You're given a matrix represented by a two-dimensional array, and two positive integers r and c 
//representing the row number and column number of the wanted reshaped matrix, respectively.
//The reshaped matrix need to be filled with all the elements of the original matrix in the same 
//row-traversing order as they were.
//注意，本题中只有两个矩阵中元素个数相等时才可以转换
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
	int m = nums.size();
	int n = nums[0].size();
	if (m*n != r*c)
		return nums;
	vector<vector<int>>res(r, vector<int>(c, 0));//定义一个新的矩阵
	for (int i = 0; i < r*c; i++) {
		res[i / c][i%c] = nums[i / n][i%n];
	}
	return res;
    }
};