/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    HashMap<Integer, Integer> map=new HashMap<>();
    int postind;
    private TreeNode construct(int[] postorder, int left, int right){
        if(left>right){
            return null;
        }
        int rvalue=postorder[postind--];
        TreeNode root=new TreeNode(rvalue);
        int ind=map.get(rvalue);
        root.right=construct(postorder,ind+1,right);
        root.left=construct(postorder,left,ind-1);
        return root;
    }
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        for(int i=0;i<inorder.length;i++){
            map.put(inorder[i],i);
        }
        postind=postorder.length-1;
        return construct(postorder,0,inorder.length-1);
    }
}