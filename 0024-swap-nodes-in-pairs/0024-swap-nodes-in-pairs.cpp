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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        head=temp2;
        ListNode* temp3=nullptr;
        ListNode* temp4=nullptr;
        while(temp1!=nullptr && temp2!=nullptr){
            temp3=temp1;
            temp4=temp2;
            temp3->next=temp4->next;
            temp4->next=temp3;
            if (temp3->next == nullptr || temp3->next->next == nullptr) {
                break;
            }
            temp1=temp3->next;
            temp2=temp1->next;
            temp3->next=temp2;
        }
        return head;
    }
};