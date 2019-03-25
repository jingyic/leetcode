 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        
        while(root != NULL)
        {
            if(root->val == val) return root;
            else if(root->val > val)
                root = root->left;
            else 
                root = root->right;
        }
        return NULL;
    }
};