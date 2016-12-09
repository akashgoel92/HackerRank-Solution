import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        try{
            int x = sc.nextInt();
            int y = sc.nextInt();
            System.out.println(x/y);
        }
        catch(ArithmeticException e){
            System.out.println(e);
        }
        catch(InputMismatchException ex){
            System.out.println(ex.getClass().toString().substring(6));
        }
    }
}
