# [830. 较大分组的位置][link] (Easy)

[link]: https://leetcode.cn/contest/weekly-contest-83/problems/positions-of-large-groups/


              <p>在一个由小写字母构成的字符串 <code>s</code> 中，包含由一些连续的相同字符所构成的分
组。</p>

<p>例如，在字符串 <code>s = &#34;abbxxxxzyy&#34;</code> 中，就含有 <code>&#34;a&#34;</code>, <code>&
#34;bb&#34;</code>, <code>&#34;xxxx&#34;</code>, <code>&#34;z&#34;</code> 和 <code>&#34;yy&#34;</cod
e> 这样的一些分组。</p>

<p>分组可以用区间 <code>[start, end]</code> 表示，其中 <code>start</code> 和 <code>end</code> 分别表
示该分组的起始和终止位置的下标。上例中的 <code>&#34;xxxx&#34;</code> 分组用区间表示为 <code>[3,6]</c
ode> 。</p>

<p>我们称所有包含大于或等于三个连续字符的分组为 <strong>较大分组</strong> 。</p>

<p>找到每一个 <strong>较大分组</strong> 的区间，<strong>按起始位置下标递增顺序排序后</strong>，返回
结果。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = &#34;abbxxxxzzy&#34;
<strong>输出：</strong>[[3,6]]
<strong>解释</strong><strong>：</strong><code>&#34;xxxx&#34; 是一个起始于 3 且终止于 6 的较大分组</c
ode>。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = &#34;abc&#34;
<strong>输出：</strong>[]
<strong>解释：</strong>&#34;a&#34;,&#34;b&#34; 和 &#34;c&#34; 均不是符合要求的较大分组。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = &#34;abcdddeeeeaabbbcd&#34;
<strong>输出：</strong>[[3,5],[6,9],[12,14]]
<strong>解释：</strong>较大分组为 &#34;ddd&#34;, &#34;eeee&#34; 和 &#34;bbb&#34;</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>s = &#34;aba&#34;
<strong>输出：</strong>[]
</pre>
 

<p><strong>提示：</strong></p>

<ul>
    <li><code>1 &lt;= s.length &lt;= 1000</code></li>
    <li><code>s</code> 仅含小写英文字母</li>
</ul>

            
