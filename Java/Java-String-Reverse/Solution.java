import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        
        int len = A.length();
        int size=len/2;
        
        String str1, str2;
        StringBuilder str = new StringBuilder();
  
        
        if(len%2 > 0){
            str1 = A.substring(0,size);
            str2 = A.substring(size+1,len);
            str = str.append(str2);
            str = str.reverse();
            StringBuffer sbuf = new StringBuffer(str);
            str2 = sbuf.toString();
            
        }
        else{
            str1 = A.substring(0,size);
            str2 = A.substring(size,len);
            str = str.append(str2);
            str = str.reverse();
            StringBuffer sbuf = new StringBuffer(str);
            str2 = sbuf.toString();
            
        }
        
        if(str1.compareTo(str2)==0) System.out.println("Yes");
        else System.out.println("No");
        
        
    }
}
