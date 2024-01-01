import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int L = scanner.nextInt();
        int R = scanner.nextInt();
        int X = scanner.nextInt();

        int count = 0;
        for (int i = L + 1; i < R; i++) {
            int num = i;
            while (num > 0) {
                int digit = num % 10;
                if (digit == X) {
                    count++;
                }
                num /= 10;
            }
        }

        System.out.println(count);
    }
}
