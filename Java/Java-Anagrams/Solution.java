import java.io.*;
import java.util.*;

public class Solution {

   static boolean isAnagram(String A, String B) {
      //Complete the function
      
      A=A.toLowerCase();
       B=B.toLowerCase();
       char[] array1 = A.toCharArray();
       char[] array2 = B.toCharArray();
       Arrays.sort(array1);
       Arrays.sort(array2);
       String A1 = new String (array1);
       String B1 = new String (array2);
       
       return A1.equals(B1);
   
   }
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        boolean ret=isAnagram(A,B);
        if(ret)System.out.println("Anagrams");
        else System.out.println("Not Anagrams");
        
    }
}
