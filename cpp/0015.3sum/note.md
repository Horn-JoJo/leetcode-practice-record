# 方法1：相向双指针
> 因为三元组的顺序不重要，因此可以直接先排序。然后枚举第一个元素，然后问题，就target = nums[i]的两个数。需要注意的是，target每次枚举一个nums[i],就会做相应的变化。
```C++ []
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n - 2; i++) {//枚举nums[i]
            int x = nums[i];
            if (i > 0 && nums[i] == nums[i - 1]) continue;//去重下一个nums[i]。
            
            //两个优化
            if (x + nums[i + 1] + nums[i + 2] > 0) break;//相邻的三个数之和已经时大于0了，则说明后面的数都是大于0的，因此直接退出枚举。
            if (x + nums[n - 1] + nums[n - 2] < 0) continue;//如果nums[i]和最后两个较大的数都是小于0的，则说明后面任意两个数与当前x的和都是小于0的，因此无需要继续枚举nums[j],nums[k],而是直接枚举下一个nums[i]。

            int j = i + 1, k = n - 1;
            while (j < k) {//排序数组的两数之和的逻辑
                int s = x + nums[j] + nums[k];
                if (s > 0) k--;
                else if (s < 0) j++;
                else {
                    ans.push_back({x, nums[j], nums[k]});
                    j += 1;
                    while (j < k && nums[j] == nums[j - 1]) j++;//去重下一个相同的nums[j]
                    
                    k -= 1;
                    while (k > j && nums[k] == nums[k + 1]) k--;//去重下一个下相同的nums[k]
                }
            }
        }

        return ans;
    }
};
```
