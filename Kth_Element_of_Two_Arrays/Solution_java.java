import java.util.Arrays;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int k = scanner.nextInt();

        int[] arr1 = new int[n];
        for (int i = 0; i < n; i++) {
            arr1[i] = scanner.nextInt();
        }

        int[] arr2 = new int[m];
        for (int i = 0; i < m; i++) {
            arr2[i] = scanner.nextInt();
        }

        int[] finalArray = new int[n + m];
       
        for(int i=0; i<n+m; i++){
          if(i<n) {
            finalArray[i]=arr1[i];
          }
          else{
            finalArray[i]=arr2[i-n];
          }
        }
         // Another way to copy array
        // System.arraycopy(arr1, 0, finalArray, 0, n);
        // System.arraycopy(arr2, 0, finalArray, n, m);

        Arrays.sort(finalArray);

        System.out.println(finalArray[k - 1]);
    }
}
