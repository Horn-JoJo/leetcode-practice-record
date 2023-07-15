// Created by jojo at 2023/07/15 11:43
// leetgo: dev
// https://leetcode.cn/problems/4sum/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> ans;
        for (int a = 0; a < n - 3; a++) {
            long long x = nums[a];
            if (a > 0 && x == nums[a - 1]) continue;
            if (x + nums[a + 1] + nums[a + 2] + nums[a + 3] > target) break;
            if (x + nums[n - 1] + nums[n - 2] + nums[n - 3] < target) continue;

            for (int b = a + 1; b < n - 2; b++) {
                long long y = nums[b];
                if (b > a + 1 && y == nums[b - 1]) continue;
                if (x + y + nums[b + 1] + nums[b + 2] > target) break;
                if (x + y + nums[n - 1] + nums[n - 2] < target) continue;

                int c = b + 1, d = n - 1;
                while (c < d) {
                    long long s = x + y + nums[c] + nums[d];
                    if (s > target) d--;
                    else if (s < target) c++;
                    else {
                        ans.push_back({(int)x, (int)y, nums[c], nums[d]});
                        c++;
                        while (c < d && nums[c] == nums[c - 1]) c++;

                        d--;
                        while (d > c && nums[d] == nums[d + 1]) d--;
                    }
                }
            }
        }

        return ans;
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	vector<int> nums;
	LeetCodeIO::scan(cin, nums);
	int target;
	LeetCodeIO::scan(cin, target);

	Solution *obj = new Solution();
	auto res = obj->fourSum(nums, target);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
