// for N = 5, the pattern should look like as below:



//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA




public class pattern_17 {
    public static void main(String[] args) {
        int n = 5;
        for (int i = 1; i <= n; i++) {
            // Print leading spaces
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            // Print increasing characters
            for (char ch = 'A'; ch < 'A' + i; ch++) {
                System.out.print(ch);
            }
            // Print decreasing characters
            for (char ch = (char) ('A' + i - 2); ch >= 'A'; ch--) {
                System.out.print(ch);
            }
            // Move to the next line
            System.out.println();
        }
    }
}