// Created by jojo at 2023/07/22 18:30
// leetgo: dev
// https://leetcode.cn/problems/lemonade-change/

#include <bits/stdc++.h>
#include <unordered_map>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0; 
        for (auto bill : bills) {
            if (bill == 5) {
                five++;
            } else if (bill == 10) {
                five--, ten++;
            } else {
                if (ten) ten--, five--;
                else five -= 3;
            }
            if (five < 0) return false;
        }

        return true;
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	vector<int> bills;
	LeetCodeIO::scan(cin, bills);

	Solution *obj = new Solution();
	auto res = obj->lemonadeChange(bills);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
