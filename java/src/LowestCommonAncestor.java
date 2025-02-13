//         3
//        / \
//        5   1
//        / \ / \
//        6  2 0  8
//        / \
//        7   4


class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}


public class LowestCommonAncestor {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        // Base case: if the current node is null or matches p/q
        if(root == null || root == p || root == q) {
            return root;
        }

        // Recursively search in the left and right subtrees
        TreeNode left = lowestCommonAncestor(root.left, p, q);
        TreeNode right = lowestCommonAncestor(root.right, p, q);

        // If both left and right subtrees return non-null, root is the LCA
        if (left != null && right != null) {
            return root; // Current node is the LCA
        }

        // Return the non-null child (either left or right)
        return left != null ? left : right; // Return the subtree that contains p/q

    }

    public static void main(String[] args) {
        // Create example tree
        TreeNode root = new TreeNode(3);
        TreeNode node5 = new TreeNode(5);
        TreeNode node1 = new TreeNode(1);
        TreeNode node6 = new TreeNode(6);
        TreeNode node2 = new TreeNode(2);
        TreeNode node0 = new TreeNode(0);
        TreeNode node8 = new TreeNode(8);
        TreeNode node7 = new TreeNode(7);
        TreeNode node4 = new TreeNode(4);

        // Construct the tree structure
        root.left = node5;
        root.right = node1;
        node5.left = node6;
        node5.right = node2;
        node1.left = node0;
        node1.right = node8;
        node2.left = node7;
        node2.right = node4;

        LowestCommonAncestor lcaFinder = new LowestCommonAncestor();
        TreeNode lca = lcaFinder.lowestCommonAncestor(root, node5, node1);
        System.out.println("LCA of 5 and 1: " + lca.val); // Output: 3
    }
}
