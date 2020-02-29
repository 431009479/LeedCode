/*************************************************************************
	> File Name: Leed_112.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 18时34分40秒
 ************************************************************************/


bool hasPathSum(struct TreeNode* root, int sum){
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL) 
            return root->val == sum;
        return hasPathSum(root->left, sum - root->val)|| hasPathSum(root->right, sum- root->val);
}

