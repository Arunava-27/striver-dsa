import java.util.Scanner;
public class CountOddDigit {    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        sc.close();
        int count = 0;

        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 != 0) {
                count++;
            }
            num /= 10;
        }
        System.out.println("Number of odd digits: " + count);
    }
}
