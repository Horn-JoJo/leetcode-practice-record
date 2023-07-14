// Created by jojo at 2023/07/15 00:15
// leetgo: dev
// https://leetcode.cn/problems/unique-paths-iii/
// https://leetcode.cn/contest/weekly-contest-120/problems/unique-paths-iii/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {

    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	vector<vector<int>> grid;
	LeetCodeIO::scan(cin, grid);

	Solution *obj = new Solution();
	auto res = obj->uniquePathsIII(grid);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
