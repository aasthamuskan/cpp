import java.util.Scanner;
class add{
    int a,b;
    void getdata(){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the first number: ");
        int a=sc.nextInt();
        System.out.println("enter the second number: ");
        int b=sc.nextInt();
        
    }
    void putdata(){
        System.out.println("addition is"+(a+b));
    }
    public static void main(String[] args){
        add aa=new add();
        aa.getdata();
        aa.putdata();
    }
}