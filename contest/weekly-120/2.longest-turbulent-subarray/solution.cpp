// Created by jojo at 2023/07/15 00:14
// leetgo: dev
// https://leetcode.cn/problems/longest-turbulent-subarray/
// https://leetcode.cn/contest/weekly-contest-120/problems/longest-turbulent-subarray/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	vector<int> arr;
	LeetCodeIO::scan(cin, arr);

	Solution *obj = new Solution();
	auto res = obj->maxTurbulenceSize(arr);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
