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
    int minCameraCover(TreeNode* root) {
         int res = 0;
        
         if(helper(root,res) == 1) res++;
         return res;
    }
    int helper(TreeNode* root,int& res){
        if(root == NULL) return 0;

        int left = helper(root->left,res);
        int right = helper(root->right,res);
        int total = left + right;
        if(left == 1 || right ==1) total = 1;
        if(total == 0){
            return 1;
        }else if(total == 2 || total == 1){
            res++;
            return -1;
        }return 0;
        
    }
};