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
    int preind=0;
    private TreeNode construct(int[] preorder, int left, int right){
        if(left>right){
            return null;
        }
        int rvalue=preorder[preind++];
        TreeNode root=new TreeNode(rvalue);
        int ind=map.get(rvalue);
        root.left=construct(preorder,left,ind-1);
        root.right=construct(preorder,ind+1,right);
        return root;
    }
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        for(int i=0;i<inorder.length;i++){
            map.put(inorder[i],i);
        }
        return construct(preorder,0,inorder.length-1);
    }
}