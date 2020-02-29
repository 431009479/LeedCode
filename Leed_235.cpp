/*************************************************************************
	> File Name: Leed_235.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 19时20分22秒
 ************************************************************************/
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if(root == NULL) return root;
    if(p->val == q->val) return p;
    if(root->val > p->val && root->val > q->val) 
     return  lowestCommonAncestor(root->left, p,  q);
    else if(root->val < p->val && root->val < q->val)
       return lowestCommonAncestor(root->right, p, q);
    return root;
}
