/* you only have to complete the function given below.  
Node is defined as  

class Node {
    int data;
    Node left;
    Node right;
}

*/

void preOrder(Node root) {
    
    Node node = root;
    
    if(node==null) return;
    
    System.out.printf("%d ",node.data);
    preOrder(node.left);
    preOrder(node.right);

}
