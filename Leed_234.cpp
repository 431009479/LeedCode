/*************************************************************************
	> File Name: Leed_234.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 16时04分56秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int fun(struct ListNode *head){
        struct ListNode *p = head;
        int k = 0;
    while(p){
        k++;
        p = p->next;
    }
    return k;
}

struct ListNode *reverse(struct ListNode *head, int n){
        struct ListNode ret, *p = head, *q;
        while(n--) p = p->next;
        ret.next = NULL;
        while(p){
            q = p->next;
            p->next = ret.next;
            ret.next = p;
            p = q;
        }
        return ret.next;
}


bool isPalindrome(struct ListNode* head){
    int k = fun(head);
      struct ListNode *p = head, *q = reverse(head, k / 2);
        while(q){
            if(p->val - q->val) return false;
            p = p->next;
            q = q->next;
        }
        return true;
}



/*int fun(struct ListNode *head){
        struct ListNode *p = head;
        int k = 0;
    while(p){
        k++;
        p = p->next;
    }
    return k;
}


bool isPalindrome(struct ListNode* head){
      struct ListNode *p = head; 
        int k = fun(head);
        int *a =(int *) malloc(sizeof(int) * k); 
        int i = 0;
        while(p){
            a[i++] = p->val;
            p = p->next;
        }
        for(int j = 0; j < k / 2; j++){
            if(a[j] != a[k - 1 - j ]) return false;
        }
    return true;
}*/
