



// E 

// D E 

// C D E 

// B C D E 

// A B C D E

public class pattern_18 {
    public static void main(String[] args) {

            
            int n=5;
            
            
            char st = 'A';
            for(int i=n; i>=1; i--){
                for(int j= (int)st + (i-1) ; j<= (int)st+(n-1); j++){
                    System.out.print((char)j);
                }
                System.out.println();
            }
        }
    }
