/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        if(list1 == nullptr && list2 == nullptr){
            return list1;
        }
        
        if(list1 != nullptr && list2 == nullptr){
            return list1;
        }
        
        if(list2 != nullptr && list1 == nullptr){
            return list2;
        }
        
        while(l1 != nullptr && l2 != nullptr){
            if(l1->val <= l2->val){
                if(head == nullptr){
                    head = l1;
                    tail = head;
                }else{
                    tail->next = l1;
                    tail = tail->next;
                }
                l1 = l1->next;
            }else{
                if(head == nullptr){
                    head = l2;
                    tail = head;
                }else{
                    tail->next = l2;
                    tail = tail->next;
                }
                
                l2 = l2->next;
            }

        }

        if (l1 != nullptr) {
            tail->next = l1;
        } else {
            tail->next = l2;
        }
        
        return head;
    }
};
