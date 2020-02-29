/*************************************************************************
	> File Name: Leed_257.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 20时36分51秒
 ************************************************************************/
int getpathCnt(struct TreeNode * root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right ==NULL) return 1;
    return getpathCnt(root->left) + getpathCnt(root ->right);
}
int getResult(struct TreeNode *root, int len, char **ret, char *buff, int k){
    if(root == NULL) return 0;
    len += sprintf(buff + len, "%d", root->val);
    buff[len] = 0;
    if(root->left == NULL && root->right == NULL){
        ret[k] = strdup(buff);
        return 1;
    }
    len += sprintf(buff + len, "->");
    int cnt = getResult(root->left, len,  ret, buff, k);
   cnt += getResult(root->right, len, ret, buff, k + cnt);
    return cnt;
}

char ** binaryTreePaths(struct TreeNode* root, int* returnSize){
        int pathCnt = getpathCnt(root);
        char **ret = (char**)malloc(sizeof(char*) * pathCnt);
        int max_len = 1024;
        char *buff = (char *)malloc(sizeof(char) * max_len);
        getResult(root, 0, ret, buff, 0);
        *returnSize = pathCnt;
        return ret;
}

