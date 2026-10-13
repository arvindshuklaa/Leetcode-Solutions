/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int helper(struct TreeNode* root, int current) {
    if (root == NULL)
        return 0;

    current = (current << 1) | root->val;

    if (root->left == NULL && root->right == NULL)
        return current;

    return helper(root->left, current) + helper(root->right, current);
}

int sumRootToLeaf(struct TreeNode* root) {
    return helper(root, 0);
}