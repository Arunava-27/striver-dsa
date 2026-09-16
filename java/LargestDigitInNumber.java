import java.util.Scanner;

public class LargestDigitInNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        
        int largestDigit = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            n /= 10;
        }
        System.out.println(largestDigit);
    }
}
