/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        dps(root, res);

        return res;
    }
private:
    int dps(TreeNode* root, int& res){
        if(!root){
            return 0;
        }

        int leftmax = dps(root->left, res);
        int rightmax = dps(root->right, res);

        res = max(res, leftmax+rightmax);

        return 1 + max(leftmax, rightmax);
    }
};

