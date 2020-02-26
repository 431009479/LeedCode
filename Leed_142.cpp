/*************************************************************************
	> File Name: Leed_142.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 11时04分40秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
        if(head == NULL) return NULL;
    do{
        p = p->next;
        q = q->next;
        if(q == NULL || q->next == NULL) return NULL;
        q = q->next;
    }while(p != q);
    int cut = 0;
    do{
        cut++;
        p = p->next;
    }while(p != q);
        p = head, q = head;

        while(cut--) q = q->next;
        while( p != q) p = p->next, q = q->next;
     
        return q;
}
