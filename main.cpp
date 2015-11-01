/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ptr, * ans;
        ptr = new ListNode(0);
        ans = ptr;
        int temp = 0;
        while (true){
            if (l1 != NULL & l2 != NULL){
                ptr->val = (l1->val + l2->val + temp) % 10;
                if(((l1->val)+(l2->val) + temp)<=9)
                    temp = 0;
                else
                        temp=1;
                l1=l1->next;
                l2=l2->next;
            }else if(l1 == NULL & l2!= NULL){
                ptr->val = (l2->val + temp) % 10;
                if((l2->val + temp)<=9)
                    temp = 0;
                else
                        temp=1;
                l2=l2->next;
            }else if(l2 == NULL & l1!= NULL){
                ptr->val = (l1->val + temp) % 10;
                if((l1->val + temp)<=9)
                    temp = 0;
                else
                    temp=1;
                l1=l1->next;
            }else{
                if(temp==0){
                       ptr = NULL;
                       return ans;
                }else{
                       ptr->val = 1;
                       ptr->next=NULL;
                       return ans;
                   }

            }//end if
            if(l1!=NULL | l2!=NULL|temp!=0){

            ptr->next = new ListNode(0);
            ptr=ptr->next;}
            else
            return ans;


        }//end while
        return ans;
    }
};
