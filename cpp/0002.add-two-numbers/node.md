# 方法1：拆分成简单问题，一个一个逐步解决
- 分别遍历两个链表，存储对应的值到数组中
- 使用高精度加法计算答案数组
- 遍历答案数组尾插法构建链表
```C++ []
class Solution {
public:
    vector<int> add(vector<int>& A, vector<int>& B) {
        vector<int> c;
        
        int t = 0;
        for (int i = 0; i < A.size() || i < B.size(); i++) {
            if (i < A.size()) t += A[i];
            if (i < B.size()) t += B[i];
            c.push_back(t % 10);
            t /= 10;
        }

        if (t) c.push_back(1);

        return c;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> A, B;
        
        while (l1 != NULL) {
            A.push_back(l1->val);
            l1 = l1->next;
        }

        while (l2 != NULL) {
            B.push_back(l2->val);
            l2 = l2->next;
        }

        auto c = add(A, B);

        ListNode* dummy = new ListNode(-1);
        dummy->next = NULL;

        ListNode *cur = dummy;
        for (int i = 0; i < c.size(); i++) {
            auto node = new ListNode(c[i]);
            node->next = cur->next;
            cur->next = node;
            cur = cur->next;
        }

        return dummy->next;
    }
};
```
