import java.util.Arrays;
public class aastha{
    public static void main(String[ ] args){
        System.out.println("radhe radhe");
        String name = "Aastha";
        String neighour="Upasana";
        int age=20;
        
        System.out.println("My name is "+name);
        //java types
        //primitive types
        //byte -1[-128 to 127]
        //short -2
        //int -4
        //long -8
        //float -4
        //double -8
        //char -2
        //boolean -1
        byte b=2;
        short s=56;

        int rollno=64;
        char letter='r';
        float marks=98.67f;
        double largeDecimal=45678.6789;
        long bigNumber=6789876545678L;
        boolean check=true;
        //non primitive types

        String str="Aastha";
        System.out.println(str.length());
        System.out.println(str.toUpperCase());
        System.out.println(str.toLowerCase());
        System.out.println(str.trim());
        System.out.println(str.substring(2));
        System.out.println(str.substring(2,5));
        System.out.println(str.replace('A','B'));
        System.out.println(str.startsWith("Aas"));
        System.out.println(str.endsWith("tha"));
        System.out.println(str.charAt(2));
        System.out.println(str.indexOf("s"));
        System.out.println(str.equals("Aastha"));
        System.out.println(str.equalsIgnoreCase("aastha"));
        System.out.println(str.concat(" Upasana"));
        System.out.println(str.contains("Aas"));
        System.out.println(str.compareTo("Aastha"));
        System.out.println(str.compareToIgnoreCase("aastha"));
        System.out.println(str.toCharArray());
        System.out.println(str.valueOf(2));
       
        //operators
        //1. Arithmetic operators
        int a=4;
        int b1=6;
        int c=a+b1;
        int d=a-b1;
        int e=a*b1;
        int f=a/b1;
        int g=a%b1;
        System.out.println(c);
        System.out.println(d);
        System.out.println(e);
        System.out.println(f);
        System.out.println(g);
        //array
        int [] marks1={1,2,3,4,5};
        System.out.println(marks1[0]);
        System.out.println(marks1[1]);
        String [] name1={"Aastha","Upasana","Radha"};
        System.out.println(name1[0]);
        System.err.println(marks1.length);
        //sort
        System.out.println(marks1[0]);
        Arrays.sort(marks1);
        System.out.println(marks1[0]);
        System.out.println(Arrays.toString(marks1));
        int[ ] marks2={1,2,3,4,5};
        //2d array
        int [][] finalmarks={{1,2,3},{4,5,6}};
        System.out.println(finalmarks[0][0]);

        //casting
        //implicit casting
        int num=5;
        double num1=num+5.5;
        //explicit casting
        double num2=5.5;
        int num3=(int)(num2+5);

        //Constants
        final float pi=3.14f;
        System.out.println(pi);
        //operators
        //1. Arithmetic operators
        int a=10;
        int b=6;
        int c=a+b;
        int d=a-b;
        int e=a*b;
        int f=a/b;
        int g=a%b;
        System.out.println(c);
        System.out.println(d);
        System.out.println(e);
        System.out.println(f);
        System.out.println(g);

        //2. Assignment operators
        int h=5;
        h+=5;
        System.out.println(h);

        //3. Comparison operators
        System.out.println(64>5);
        System.out.println(64<5);
        System.out.println(64>=5);
        System.out.println(64<=5);
        System.out.println(64==5);
        System.out.println(64!=5);

        //4. Logical operators
        System.out.println(64>5 && 64<5);
        System.out.println(64>5 || 64<5);
        System.out.println(!(64>5));

        //5. Bitwise operators
        System.out.println(64&5);
        System.out.println(64|5);
        System.out.println(64^5);
        System.out.println(~64);
        System.out.println(64<<2);
        System.out.println(64>>2);

        //6. Unary operators
        int i=5;
        int j=5;
        System.out.println(i++);
        System.out.println(++j);

        //7. Ternary operators
        int k=5;
        int l=6;
        int m=(k>l)?k:l;
        System.out.println(m);

        //8. instanceof operator
        System.out.println(name instanceof String);
        System.out.println(name instanceof Object);

        //9. new operator
        String str1=new String("Aastha");
        System.out.println(str1);

        //10. this operator
        System.out.println(this);

        //11. super operator
         System.out.println(super);

         //12. modulo operator
            System.out.println(64%5);

            

            











        


        


    }
}