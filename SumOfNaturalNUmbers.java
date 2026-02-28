import java.util.Scanner;

public class SumOfNaturalNUmbers{

    public static int SumOfNaturalNUmber(int n){
        if(n==0)return 0;

    return n+SumOfNaturalNUmber(n-1);
    }
    public static void main(String[] args) {
        Scanner scn= new Scanner(System.in);

        System.out.println("Enter the number: ");
        int n= scn.nextInt();

        System.out.println(SumOfNaturalNUmber(n));
 scn.close();

    }
}