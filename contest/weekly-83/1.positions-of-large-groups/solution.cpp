// Created by jojo at 2023/07/14 21:08
// leetgo: dev
// https://leetcode.cn/problems/positions-of-large-groups/
// https://leetcode.cn/contest/weekly-contest-83/problems/positions-of-large-groups/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        
        for (int i = 0, j = 0; j < s.size(); j++) {
            j = i;
            while (j < s.size() && s[j] == s[i]) j++;
            if (j - i >= 3) ans.push_back({i, j - 1});
            i = j;
        }

        return ans;
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	string s;
	LeetCodeIO::scan(cin, s);

	Solution *obj = new Solution();
	auto res = obj->largeGroupPositions(s);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
