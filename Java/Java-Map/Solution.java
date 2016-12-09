import java.util.*;
import java.io.*;

class Solution{
   public static void main(String []args)
   {
      Map<String,String> myMap = new HashMap<String,String>();
      Scanner in = new Scanner(System.in);
      int n=in.nextInt();
      in.nextLine();
      for(int i=0;i<n;i++)
      {
         String name=in.nextLine();
         int phone=in.nextInt();
         in.nextLine();
         String p = Integer.toString(phone);
         myMap.put(name,p);
      }
      while(in.hasNext())
      {
         String s=in.nextLine();
         if(myMap.get(s)==null) System.out.println("Not found");
         else System.out.println(s +"="+myMap.get(s));
      }
   }
}
