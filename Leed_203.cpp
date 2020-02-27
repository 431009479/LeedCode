/*************************************************************************
	> File Name: Leed_203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 14时58分52秒
 ************************************************************************/


 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
        struct ListNode ret, *p = &ret, *q = &ret;
        ret.next = head;
        while(p->next){
            if(p->next->val == val)
            p->next = p->next->next;
        else {
            p = p->next;
        }
    }
    return ret.next;
}
