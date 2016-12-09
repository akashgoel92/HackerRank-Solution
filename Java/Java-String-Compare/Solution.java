import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
       
       Scanner sc=new Scanner(System.in);
        String s = sc.next();
        int n = sc.nextInt();
        int len = s.length();
        int size = len-n+1;
        
        String [] str = new String[size];
        int [] hash = new int[size];
        
        for(int i=0; i<size; i++){
            str[i] = s.substring(i,i+n);
        }
        
        String max = str[0];
        String min = str[0];
        
        for(int i=0; i<size; i++){
            if(max.compareTo(str[i])<0) max = str[i];
            
            if(min.compareTo(str[i])>0) min = str[i];
            
        }
        System.out.println(min);
        System.out.println(max);
    }
}
