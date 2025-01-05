import java.util.Scanner;

public class triangle {
    static void pattern(int n,int m){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print("*");
    }
    System.out.println("");

}

}
public static void main(String[] args){
    @SuppressWarnings("resource")
    Scanner aa=new Scanner(System.in);
    System.out.println("Enter the number of rows");
    int n=aa.nextInt();
    int m=aa.nextInt();
    pattern(n,m);
}
}
