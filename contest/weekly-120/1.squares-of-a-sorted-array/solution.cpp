// Created by jojo at 2023/07/15 00:14
// leetgo: dev
// https://leetcode.cn/problems/squares-of-a-sorted-array/
// https://leetcode.cn/contest/weekly-contest-120/problems/squares-of-a-sorted-array/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (auto& x : nums)
            x = x * x;
        sort(nums.begin(), nums.end());

        return nums;
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	vector<int> nums;
	LeetCodeIO::scan(cin, nums);

	Solution *obj = new Solution();
	auto res = obj->sortedSquares(nums);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
