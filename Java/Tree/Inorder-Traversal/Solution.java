/* you only have to complete the function given below.  
Node is defined as  

class Node {
    int data;
    Node left;
    Node right;
}

*/

void inOrder(Node root) {
    Node node = root;
    
    if(node==null) return;
    
    inOrder(node.left);
    System.out.printf("%d ",node.data);
    inOrder(node.right);
}
