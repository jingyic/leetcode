/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    //考验二叉树中序遍历的非递归方式，需要额外一个栈空间
    stack<TreeNode *> s;
    BSTIterator(TreeNode *root) {
        while(root != NULL)
        {
            s.push(root);
            root = root->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !s.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* temp = s.top();
        int min = temp->val;
        s.pop();
        if(temp->right != NULL)
        {
            temp = temp->right;
            while(temp != NULL)
            {
                s.push(temp);
                temp = temp->left;
            }
        }
        return min;
    } 
     
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */