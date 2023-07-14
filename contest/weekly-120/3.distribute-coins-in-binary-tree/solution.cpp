// Created by jojo at 2023/07/15 00:14
// leetgo: dev
// https://leetcode.cn/problems/distribute-coins-in-binary-tree/
// https://leetcode.cn/contest/weekly-contest-120/problems/distribute-coins-in-binary-tree/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    int distributeCoins(TreeNode* root) {

    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	TreeNode* root;
	LeetCodeIO::scan(cin, root);

	Solution *obj = new Solution();
	auto res = obj->distributeCoins(root);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
