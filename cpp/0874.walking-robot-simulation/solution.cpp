// Created by jojo at 2023/07/19 13:07
// leetgo: dev
// https://leetcode.cn/problems/walking-robot-simulation/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int dirs[5] = {0, 1, 0, -1, 0};//(0，1)表示北方的偏移量1，(1, 0)表示东方的偏移量，(0，-1)表示
        //南方的偏移量，(-1, 0)表示西方的偏移量
        auto f = [](int x, int y) {
            return x * 60010 + y;
        };

        unordered_set<int> s;
        for (auto& e : obstacles) {
            s.insert(f(e[0], e[1]));//二维坐标转一维：用来存储障碍点的一维坐标
        }

        int ans = 0, k = 0;//k表示当前机器人的方向，k = 0表示机器人方向为北方
        int x = 0, y = 0;//当前的机器人的坐标
        for (int c : commands) {
            if (c == -2) {//如果当前c == -2 则逆时针旋转90度，k = (k + 3) % 4 
                k = (k + 3) % 4;
            } else if (c == -1) {//如果当前c == -2 则顺时针旋转90度，k = (k + 1) % 4
                k = (k + 1) % 4;
            } else {//否则就到开始移动坐标
                while (c--) {//移动次数为c次，也就是进行c次的一步一步的移动
                    int nx = x + dirs[k], ny = y + dirs[k + 1];
                    if (s.count(f(nx, ny))) {//如果遇到了障碍，就没法移动，因此返回
                        break;
                    }
                    x = nx, y = ny;//更新机器人坐标
                    ans = max(ans, x * x + y * y);//更新当前坐标到原点的欧氏距离
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

	vector<int> commands;
	LeetCodeIO::scan(cin, commands);
	vector<vector<int>> obstacles;
	LeetCodeIO::scan(cin, obstacles);

	Solution *obj = new Solution();
	auto res = obj->robotSim(commands, obstacles);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
