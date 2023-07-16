// Created by jojo at 2023/07/15 10:41
// leetgo: dev
// https://leetcode.cn/problems/3sum-closest/

#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
            
        int ans = 0, min_diff = INT_MAX, n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            int x = nums[i];
            
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int s = x + nums[i + 1] + nums[i + 2];
            if (s > target) {
                if (s - target < min_diff) {
                    ans = s;
                }
                break;
            }

            s = x + nums[n - 1] + nums[n - 2];
            if (s < target) {
                if (target - s < min_diff) {
                    min_diff = target - s;
                    ans = s;
                }
                continue;
            }

            int b = i + 1, c = n - 1;
            while (b < c) {
                s = x + nums[b] + nums[c];
                if (s == target) {
                    return target;
                }

                if (s > target) {
                    if (s - target < min_diff) {
                        min_diff =  s - target;
                        ans = s;
                    }
                    c--;
                } else if (s < target) {
                    if (target - s < min_diff) {
                        min_diff = target - s;
                        ans = s;
                    }
                    b++;
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
    auto res = obj->threeSumClosest(nums, target);
    LeetCodeIO::print(out_stream, res);
    cout << "\noutput: " << out_stream.rdbuf() << endl;

    delete obj;
    return 0;
}
