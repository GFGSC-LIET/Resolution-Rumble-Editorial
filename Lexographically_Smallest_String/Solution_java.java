        import java.util.*;
        public class Solution {
            public static void main(String args[] ) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        char ch = s.charAt(0);
        int index = 0;

        for (int i = 1; i < n; i++) {
            if (ch >= s.charAt(i)) {
                ch = s.charAt(i);
                index = i;
            }
        }

        if (index == 0) {
            System.out.println(s);
        } else if (index == n - 1) {
            s = ch + s.substring(0, n - 1);
            System.out.println(s);
        } else {
            String t = s.substring(index + 1);
            s = ch + s.substring(0, index) + t;
            System.out.println(s);
        }
    }
}