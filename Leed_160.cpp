/*************************************************************************
	> File Name: Leed_160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 11时06分24秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
        struct ListNode *p = headA, *q = headB;
        while(p != q){
            p = p ? p->next : headB;
            q = q ? q->next : headA;
        }
        return p;

 }//方法二
/*struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int  a = 0, b = 0;
    struct ListNode *p = headA, *q = headB;
    while(p) a++, p = p->next;
    while(q) b++, q = q->next;
    int m = a- b;
    p = headA, q = headB;
    if(m > 0){
        while(m--) p = p ->next;
        while(p != q){
            p = p->next;
            q = q->next;
        }
    }else{
        while(m++) q = q->next;
        while( p != q){
            p = p->next;
            q = q->next;
        }
    }
    return p;
}*/
