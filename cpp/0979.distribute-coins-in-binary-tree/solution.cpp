// Created by jojo at 2023/07/14 20:06
// leetgo: dev
// https://leetcode.cn/problems/distribute-coins-in-binary-tree/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    int ans = 0;

    int dfs(TreeNode* node) {
        if (node == NULL)
            return 0;

        int d = dfs(node->left) + dfs(node->right) + node->val - 1;
        ans += abs(d);

        return d;
    }

    int distributeCoins(TreeNode* root) {
        dfs(root);
        return ans;
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
