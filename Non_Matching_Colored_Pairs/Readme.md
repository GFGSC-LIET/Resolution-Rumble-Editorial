You are given a matrix of size n x n, consisting of 0s and 1s. Each cell with a value of 1 is colored red, and the others are colored blue.

Now, after rotating the matrix by 180 degrees, you need to find the number of non-matching colored pairs.

Input Format:

The first line consists of n, the size of the matrix

Constraints:

1 ≤ n ≤ 1000

Output Format:

Print the count of non matching colored pairs

Sample Input:

4
1 1 1 1
0 0 0 1
1 0 1 0
1 1 1 1

Sample Output:

1

Explanation:

After a 180-degree rotation, there is only one non-matching colored pair.

Matrix befor 180-degree Rotation

![image](https://imgtr.ee/images/2023/10/06/80e814fcb9f0a7b63a39d6a078360e16.jpeg)
![ff566e024337e71d1fb8f3e90f2639a6.png](https://imgtr.ee/images/2023/12/27/ff566e024337e71d1fb8f3e90f2639a6.png)

Matrix after 180-degree Rotation

![image](https://imgtr.ee/images/2023/10/06/80e814fcb9f0a7b63a39d6a078360e16.jpeg)
![1170d747386ac2785fee25f83b2c80dd.png](https://imgtr.ee/images/2023/12/27/1170d747386ac2785fee25f83b2c80dd.png)