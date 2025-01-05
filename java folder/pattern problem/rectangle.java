import java.util.Scanner;

public class rectangle {
    static void pattern(int n,int m){

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            System.out.print("*");
        }
        System.out.println("");
    }
}
    public static void main(String[] args){
        @SuppressWarnings("resource")
        Scanner myObj = new Scanner(System.in);
        System.out.println("Enter the number of rows: ");
        int n = myObj.nextInt();
        System.out.println("Enter the number of columns: ");
        int m = myObj.nextInt();
        pattern(n,m);
    }
}
