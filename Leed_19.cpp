/*************************************************************************
	> File Name: Leed_19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 10时53分36秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode ret, *p = &ret, *q = &ret;
    ret.next = head;
    while(n--) p = p->next;
    while(p->next){
       p = p->next;
       q = q->next;
    }
    q->next = q->next->next;
    return ret.next;
}
