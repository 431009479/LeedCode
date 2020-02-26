/*************************************************************************
	> File Name: Leed_24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 10时56分46秒
 ************************************************************************/
 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
        struct ListNode ret, *q, *p = &ret, *k;
        ret.next = head;
        q = head;
        while(q && q->next){
            p->next = q->next;
            q->next = p->next->next;
            p->next->next = q;
            p = q;
           q = q->next;
        }  
      return   ret.next;  
}
