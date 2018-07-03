/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)
            return true;
        else if(p == NULL||q == NULL)
            return false;
        
        while(p&&q)
        {
            if(p->val!=q->val)
                return false;
            else
            {
                bool x = isSameTree(p->left,q->left);
                bool y = isSameTree(p->right,q->right);
                return (x&&y);
            }
        }
    }
};