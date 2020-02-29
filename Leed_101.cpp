/*************************************************************************
	> File Name: Leed_101.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 14时57分26秒
 ************************************************************************/


bool fun(struct TreeNode *p, struct TreeNode *q){
    if(p == NULL && q == NULL) return true;
    if(p == NULL || q == NULL) return false;
    if(p->val - q ->val) return false;
    return fun(p->left, q->right) && fun(p->right, q->left);
}


bool isSymmetric(struct TreeNode* root){
    if(root == NULL) return true;
    return fun(root->left, root->right);
}
