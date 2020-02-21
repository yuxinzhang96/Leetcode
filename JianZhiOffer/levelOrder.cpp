//从上到下打印出二叉树的每个节点，同一层的节点按照从左到右的顺序打印。
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
    vector<int> levelOrder(TreeNode* root) {
        vector<int> result;
        if(root==nullptr) return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp= q.front();//注意语法
            result.push_back(temp->val);
            if(temp->left!=nullptr) q.push(temp->left);
            if(temp->right!=nullptr) q.push(temp->right);
            q.pop(); 
        }
        return result;
    }
};
