Given two arrays arr1 and arr2 of size N and M respectively and an element K.
The task is to find the element that would be at the kth position of the final sorted array.

Input Format:

The first line contains three space-separated integers N, M, and K, where N is the size of the first array arr1, M is the size of the second array arr2, and K is the position of the element to find in the final sorted array.
The second line contains N space-separated integers representing the elements of the first array arr1.
The third line contains M space-separated integers representing the elements of the second array arr2.

Constraints:

1 <= N, M <=102
0 <= arr1[i], arr2[i] <=103
1 <= K <= N+M

Output Format:

for every testcase print the element at Kth position of sorted array.

Sample Input:

5 4 5
2 3 6 7 9
1 4 8 10

Sample Output:

6

Explanation:

The final sorted array would be - 1, 2, 3, 4, 6, 7, 8, 9, 10 The 5th element of this array is 6.