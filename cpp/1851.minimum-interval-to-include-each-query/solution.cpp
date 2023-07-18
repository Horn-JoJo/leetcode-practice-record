// Created by jojo at 2023/07/18 14:05
// leetgo: dev
// https://leetcode.cn/problems/minimum-interval-to-include-each-query/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        //获取长度
        int m = intervals.size(), n = queries.size();
        //按照左端点进行排序
        sort(intervals.begin(), intervals.end());
        
        //重定义pair类型
        using pii = pair<int, int>;
        //定义pii类型数组qs，用来存储值和对应的下标
        vector<pii> qs;
        for (int i = 0; i < queries.size(); i++) {
            qs.emplace_back(queries[i], i);
        }
        //按照第一个关键字进行排序（pair默认排序规则）
        sort(qs.begin(), qs.end());
        
        //定义小根堆优先队列, 维护left >=查询值x <= right 的最小区间长度
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        //初始化答案数组ans
        vector<int> ans(n, -1);
        //初始化区间数组的开始下标位置
        int i = 0;
        for (auto& [x, j] : qs) {
            while (i < m && intervals[i][0] <= x) {
                auto a = intervals[i][0], b = intervals[i][1];
                pq.emplace(b - a + 1, b);
                i++;
            }

            while (pq.size() && pq.top().second < x) {
                pq.pop();
            }

            if (pq.size()) ans[j] = pq.top().first;
        }

        return ans;
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	vector<vector<int>> intervals;
	LeetCodeIO::scan(cin, intervals);
	vector<int> queries;
	LeetCodeIO::scan(cin, queries);

	Solution *obj = new Solution();
	auto res = obj->minInterval(intervals, queries);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
