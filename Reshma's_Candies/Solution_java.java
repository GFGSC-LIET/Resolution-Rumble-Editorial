import java.util.*;

public class Solution {
    public static void main(String args[] ) {
Scanner scanner = new Scanner(System.in);
int candies = scanner.nextInt();
int n = scanner.nextInt();

int[] arr = new int[n];
int i = 0;
int distribute = 1;

while (candies > 0) {
    if (candies <= distribute) {
        l[i] += candies;
        break;
    }
    arr[i] += distribute;
    candies -= distribute;
    distribute++;
    i++;
    if (i == n) {
        i = 0;
    }
}
for (int j = 0; j < n; j++) {
    System.out.print(arr[j] + " ");
}

    }
}