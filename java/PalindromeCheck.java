import java.util.Scanner;

public class PalindromeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        int copy=n;
        int rev=0;
        while(n!=0){
            int rem = n%10;
            rev = (rev*10)+rem;
            n=n/10;
        }

        if(copy == rev){
            System.out.println(true);
        } else {
            System.out.println(false);
        }
    }
}
