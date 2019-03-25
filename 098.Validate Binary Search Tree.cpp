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
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;
        
        vector<int> v;
        inorder(root,v);
        
        for(int i = 0;i<v.size()-1;i++)
        {
            if(v[i+1]<=v[i])
                return false;
        }
        return true;
  
    }
    
    vector<int> inorder(TreeNode* root, vector<int> &v)
    {
        
        if(root!=NULL)
        {
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
        
        return v;
        
    }
};