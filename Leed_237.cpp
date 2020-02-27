/*************************************************************************
	> File Name: Leed_237.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 16时19分54秒
 ************************************************************************/
 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
        node ->val = node ->next->val;
        node->next = node ->next->next;
}

