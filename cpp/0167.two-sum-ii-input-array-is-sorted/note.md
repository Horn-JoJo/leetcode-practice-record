[TOC]
# 方法1：暴力枚举(会超时)
> 第一层循环枚举numbers_i, 第二层循环枚举numbers_j, 如果找到numbers_i + numbers_j == target，则返回对应数组的下标+1（返回的下标必须是按照从小到大的顺序进行返回的）
```C++ []
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); i++) {
            for (int j = 1; j < numbers.size(); j++) {
                if (numbers[i] + numbers[j] == target) {
                    return {i + 1, j + 1};
                }
            }
        }
            
        return {};
    }
}
```
- 时间复杂度：$O(n^2)$
- 空间复杂度：$O(1)$
# 方法2：哈希表
> **因为两个数的的可能取值都是一样的，并且两个数互不相等，因此可以在遍历其中的一个数时，可以去记录这个数已经枚举的值（这些值和当前枚举的值时互不相同的，因此可以作为另一个数的取值！）**。如果枚举其中的一个数，然后去查找这个数之前所有的可能取值。然后如果能够找到于当前值和等于target的值，则按照顺序进行返回就ok。
```C++ []
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < numbers.size(); i++) {
            if (m.count(target - numbers[i]) != 0) {
                return {m[target - numbers[i]] + 1, i + 1};
            }
            m[numbers[i]] = i;
        }

        return {};        
    }
};
```
- 时间复杂度：$O(n)$
- 空间复杂度：$O(n)$

# 方法3：相向双指针
> 上述两种方法都没有充分利用数组值是递增有序的性质。但实际上可以利用该性质进一步优化空间复杂度！
> 设i指针指向当前数组的最小元素，j指针指向当前数组的最大元素。如果两个数的和大于target，则说明i,i+1,i+2,j-1对应的数与numbers[j]相加的和都是大于target的！！！(因为是递增有序的，i+1,i+2,i+3,,,j-1对应的数都是逐渐变大的，而另一个数numbers[j]是固定不变的)，因此这时候需要调整最大的数，使其变小一点(j指针往左移动)；相反如果当前的和是小于target, 则说明j,j-1,j-2,,,i+1的对应的数与numbers[i]相加的和都是小于target的！！！(因此最大的元素numbers[j]和numbers[i]和相加都小于的了，有与数组是单调递增的，因此j-1,j-2,j-3...i+1对应的数与numbers[i]相加和一定都是小于target的)，因此这时候需要调整最小的数，使其变大一点(i之恶还能往右移动)；如果两数之和等于target，则直接按照递增顺序返回对应的下标即可。
```C++ []
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l < r) {
            auto sum = numbers[l] + numbers[r];
            if (sum == target) break;
            if (sum > target) r--;
            else l++;
        }

        return {l + 1, r + 1};
    }
};
```
- 时间复杂度：$O(n)$
- 空间复杂度：$O(1)$
# 经验
- **时间复杂度的优化本质是如何设计一次操作能够尽可能获得更多的信息量。**
