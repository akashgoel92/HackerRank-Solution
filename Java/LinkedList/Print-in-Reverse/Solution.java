/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    // This is a "method-only" submission. 
    // You only need to complete this method. 

void ReversePrint(Node head) {
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node temp = head;
    int count = 0;
    
    while(temp!=null){
        temp=temp.next;
        count++;
    }
    
    Node t = head;
    int[] arr = new int[count];
    int i=0;
    
    while(t!=null){
        arr[i] = t.data;
        i++;
        t=t.next;
    }
    
    for(int index=arr.length-1; index>=0; index--){
        System.out.println(arr[index]);
    }

}
