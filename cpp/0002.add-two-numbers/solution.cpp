// Created by jojo at 2023/07/15 10:47
// leetgo: dev
// https://leetcode.cn/problems/add-two-numbers/

#include <bits/stdc++.h>
#include <vector>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    vector<int> add(vector<int>& a, vector<int>& b) {
        if (b.size() > a.size()) return add(b, a);

        vector<int> c;
        int carry = 0;
        for (int i = 0; i < a.size(); i++) {
            carry += a[i];
            if (i < b.size()) carry += b[i];

            c.push_back(carry % 10);
            carry /= 10;
        }

        if (carry) c.push_back(1);
        return c;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> a, b;
        while (l1) {
            a.push_back(l1->val);
            l1 = l1->next;
        }

        while (l2) {
            b.push_back(l2->val);
            l2 = l2->next;
        }
            
        auto c = add(a, b);
        
        auto dummy = new ListNode(-1);
        dummy->next = NULL;

        ListNode* cur = dummy;
        for (int i = 0; i < c.size(); i++) {
            auto node = new ListNode(c[i]);
            node->next = cur->next;
            cur->next = node;
            cur = cur->next;
        }
        
        return dummy->next;
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	ListNode* l1;
	LeetCodeIO::scan(cin, l1);
	ListNode* l2;
	LeetCodeIO::scan(cin, l2);

	Solution *obj = new Solution();
	auto res = obj->addTwoNumbers(l1, l2);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
