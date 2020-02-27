/*************************************************************************
	> File Name: Leed_206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 15时15分25秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *p,  *q;
     p = head;
     head = NULL;
     while(p){
         q = p->next;
         p->next = head;
         head = p;
         p = q;
     } 
     return head;

}
/*struct ListNode* reverseList(struct ListNode* head){
    struct ListNode ret, *p = head, *q;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}*/
