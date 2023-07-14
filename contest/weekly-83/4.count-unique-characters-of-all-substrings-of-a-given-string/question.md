# [828. 统计子串中的唯一字符][link] (Hard)

[link]: https://leetcode.cn/contest/weekly-contest-83/problems/count-unique-characters-of-all-substrings-of-a-given-string/


              <p>我们定义了一个函数 <code>countUniqueChars(s)</code> 来统计字符串 <code>s</code> 中
的唯一字符，并返回唯一字符的个数。</p>

<p>例如：<code>s = &#34;LEETCODE&#34;</code> ，则其中 <code>&#34;L&#34;</code>, <code>&#34;T&#34;</c
ode>,<code>&#34;C&#34;</code>,<code>&#34;O&#34;</code>,<code>&#34;D&#34;</code> 都是唯一字符，因为它
们只出现一次，所以 <code>countUniqueChars(s) = 5</code> 。</p>

<p>本题将会给你一个字符串 <code>s</code> ，我们需要返回 <code>countUniqueChars(t)</code> 的总和，其
中 <code>t</code> 是 <code>s</code> 的子字符串。输入用例保证返回值为 32 位整数。</p>

<p>注意，某些子字符串可能是重复的，但你统计时也必须算上这些重复的子字符串（也就是说，你必须统计 <cod
e>s</code> 的所有子字符串中的唯一字符）。</p>

<p> </p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入: </strong>s = &#34;ABC&#34;
<strong>输出: </strong>10
<strong>解释:</strong> 所有可能的子串为：&#34;A&#34;,&#34;B&#34;,&#34;C&#34;,&#34;AB&#34;,&#34;BC&#3
4; 和 &#34;ABC&#34;。
     其中，每一个子串都由独特字符构成。
     所以其长度总和为：1 + 1 + 1 + 2 + 2 + 3 = 10
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入: </strong>s = &#34;ABA&#34;
<strong>输出: </strong>8
<strong>解释: </strong>除<code>了 countUniqueChars</code>(&#34;ABA&#34;) = 1 之外，其余与示例 1 相同
。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = &#34;LEETCODE&#34;
<strong>输出：</strong>92
</pre>

<p> </p>

<p><strong>提示：</strong></p>

<ul>
    <li><code>1 &lt;= s.length &lt;= 10^5</code></li>
    <li><code>s</code> 只包含大写英文字符</li>
</ul>

            
