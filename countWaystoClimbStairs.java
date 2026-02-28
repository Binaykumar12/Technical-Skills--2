import java.util.Scanner;
public class countWaystoClimbStairs {

    public static int countWays(int n){
               if(n==0)return 0;
               if(n==1 || n==2 )return n;
               else
                return  countWays(n-1)+countWays(n-2);
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter the number of stairs to climb : ");
        int n=scn.nextInt();

        System.out.println(countWays(n));

        scn.close();
    }
    
}
