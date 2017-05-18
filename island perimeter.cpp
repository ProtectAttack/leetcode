//island perimeter：用矩阵表示一个被水环绕的岛屿，求岛屿的周长
class Solution {
public:
	int islandPerimeter(vector<vector<int>>& grid) {
		size_t island_count=0;
		size_t repate=0;
		for (size_t i = 0; i < grid.size(); ++i) {
			for (size_t j = 0; j < grid[i].size(); ++j) {
				if (grid[i][j] == 1) {
					island_count++;
					if (j!=0&&grid[i][j - 1] == 1)repate++;
					if (i!=0&&grid[i - 1][j] == 1)repate++;
				}
			}
		}
		return 4 * island_count - repate * 2;
	}
};