// Created by jojo at 2023/07/15 22:15
// leetgo: dev
// https://leetcode.cn/problems/3sum/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n - 2; i++) {
            int x = nums[i];
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            if (x + nums[i + 1] + nums[i + 2] > 0) break;
            if (x + nums[n - 1] + nums[n - 2] < 0) continue;

            int j = i + 1, k = n - 1;
            while (j < k) {
                int s = x + nums[j] + nums[k];
                if (s > 0) k--;
                else if (s < 0) j++;
                else {
                    ans.push_back({x, nums[j], nums[k]});
                    j += 1;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    
                    k -= 1;
                    while (k > j && nums[k] == nums[k + 1]) k--;
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

	Solution *obj = new Solution();
	auto res = obj->threeSum(nums);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
