// Created by jojo at 2023/07/17 17:29
// leetgo: dev
// https://leetcode.cn/problems/add-strings/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:

    string add(string& num1, string& num2) {
        string ans = "";
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        int t = 0;
        for (int i = 0; i < num1.size(); i++) {
            t += num1[i] - '0';
            if (i < num2.size()) t += num2[i] - '0';
            ans += (t % 10) + '0';
            t /= 10;
        }

        if (t) ans += '1';
        reverse(ans.begin(), ans.end());
        
        return ans;
    }

    string addStrings(string num1, string num2) {
        if (num2.size() > num1.size()) return addStrings(num2, num1);
        return add(num1, num2);
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	string num1;
	LeetCodeIO::scan(cin, num1);
	string num2;
	LeetCodeIO::scan(cin, num2);

	Solution *obj = new Solution();
	auto res = obj->addStrings(num1, num2);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
