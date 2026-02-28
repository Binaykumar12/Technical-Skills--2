import java.util.Scanner;

public class CountDigits {

    public static int CountD(int n){
        if(n==0)return 0;
        return 1+CountD(n/10);

        
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int n= scn.nextInt();

        System.out.println(CountD(n));
        scn.close();
    }
    
}
