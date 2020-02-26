/*************************************************************************
	> File Name: Leed_83.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 11时01分32秒
 ************************************************************************/
给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。

示例 1:

输入: 1->1->2
输出: 1->2
示例 2:

输入: 1->1->2->3->3
输出: 1->2->3
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL || head ->next == NULL) 
        return head;
    struct ListNode* tmp;
         tmp=head;
    while(tmp!=0){
        while(tmp->next!=0&&tmp->val==tmp->next->val) 
        tmp->next=tmp->next->next;
        tmp=tmp->next;}
        return head;
}
