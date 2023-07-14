// Created by jojo at 2023/07/14 21:08
// leetgo: dev
// https://leetcode.cn/problems/count-unique-characters-of-all-substrings-of-a-given-string/
// https://leetcode.cn/contest/weekly-contest-83/problems/count-unique-characters-of-all-substrings-of-a-given-string/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    int uniqueLetterString(string s) {

    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	string s;
	LeetCodeIO::scan(cin, s);

	Solution *obj = new Solution();
	auto res = obj->uniqueLetterString(s);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
