You are given a string S. You can perform only one operation by choosing an index i and moving the character S[i] to the beginning of the string, removing its old position.

For example: If S = "abcab" choosing index i = 4 transforms the string to "aabcb"

A string a is lexicographically smaller than a string b of the same length if and only if the following holds:

In the first position where a and b differ, the string a has a letter that appears earlier in the alphabet than the corresponding letter in b

Input Format:

The first line consists of N, the size of the string S.
The second line consists of the string S.

Constraints:

1 ≤ n ≤ 100

Output Format:

Print the lexicographically smallest possible string.

Sample Input:
3
cba

Sample Output:
acb