// Created by jojo at 2023/07/14 21:08
// leetgo: dev
// https://leetcode.cn/problems/consecutive-numbers-sum/
// https://leetcode.cn/contest/weekly-contest-83/problems/consecutive-numbers-sum/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    int consecutiveNumbersSum(int n) {
        
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	int n;
	LeetCodeIO::scan(cin, n);

	Solution *obj = new Solution();
	auto res = obj->consecutiveNumbersSum(n);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
