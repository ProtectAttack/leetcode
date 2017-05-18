//distribute candies：有多块n（偶数）蛋糕，这些蛋糕有多种m，每种蛋糕可以有多块，将
//这些蛋糕平均（个数相同，种类可以不同）分给哥哥和妹妹，问：妹妹最多可以分得几种蛋糕？
//解法：抓住核心！！！如果m>n/2，则妹妹最多分得n/2种；若m<n/2，则妹妹最多分得m种
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