# [979. 在二叉树中分配硬币][link] (Medium)

[link]: https://leetcode.cn/problems/distribute-coins-in-binary-tree/

给你一个有 `n` 个结点的二叉树的根结点 `root` ，其中树中每个结点 `node` 都对应有 `node.val` 枚硬币。
整棵树上一共有 `n` 枚硬币。

在一次移动中，我们可以选择两个相邻的结点，然后将一枚硬币从其中一个结点移动到另一个结点。移动可以是从
父结点到子结点，或者从子结点移动到父结点。

返回使每个结点上 **只有** 一枚硬币所需的 **最少** 移动次数。

**示例 1：**

![](https://assets.leetcode.com/uploads/2019/01/18/tree1.png)

```
输入：root = [3,0,0]
输出：2
解释：一枚硬币从根结点移动到左子结点，一枚硬币从根结点移动到右子结点。

```

**示例 2：**

![](https://assets.leetcode.com/uploads/2019/01/18/tree2.png)

```
输入：root = [0,3,0]
输出：3
解释：将两枚硬币从根结点的左子结点移动到根结点（两次移动）。然后，将一枚硬币从根结点移动到右子结点。

```

**提示：**

- 树中节点的数目为 `n`
- `1 <= n <= 100`
- `0 <= Node.val <= n`
- 所有 `Node.val` 的值之和是 `n`