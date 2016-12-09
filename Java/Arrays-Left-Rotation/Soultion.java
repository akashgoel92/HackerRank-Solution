import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static int[] arrayLeftRotation(int[] a, int n, int k) {
      int r = n-(n-k);
        if(r<0){
            r*=(-1);
        }
        
        int[] arr = new int[n];
        if(r!=0){
            int j=0;
            for(int i=r; i<n; i++){
                arr[j]=a[i];
                j++;
            }
            for(int i=0; i<r; i++){
                arr[j]=a[i];
                j++;
            }
            return arr;
        }
        
        else return a;
        
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
      
        int[] output = new int[n];
        output = arrayLeftRotation(a, n, k);
        for(int i = 0; i < n; i++)
            System.out.print(output[i] + " ");
      
        System.out.println();
      
    }
}
