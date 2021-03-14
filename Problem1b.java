package Internshalla;

public class Problem1b {
    public static void main(String[] args) {
        char ch ='A';
        for(int i=1;i<=5;i++){
            for (int j=4;j>=i;j--){
                System.out.print(" ");
            }
            for (int k=1;k<=i;k++){
                System.out.print(ch);
                ch++;
        }
            System.out.println();
        }
    }
       }
