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
    ListNode* middleNode(ListNode* head) {
        // ListNode* temp1=head;
        // ListNode* temp2=head;
        // ListNode* temp=head;
        // int cnt=0;
        // if(head->next==nullptr) return head;
        // while(temp!=nullptr){
        //     cnt++;
        //     temp=temp->next;
        // }
        // cnt=cnt/2;
        // while(temp1!=nullptr && temp2->next!=nullptr){
        //     cnt--;
        //     if(cnt==0) break;
        //     temp1=temp1->next;
        //     temp2=temp2->next->next;
        // }
        // ListNode* newhead = temp1->next;
        // delete temp;
        // return newhead;
        ListNode* temp1=head;
        ListNode* temp2=head;
        if(head==nullptr || head->next==nullptr) return head;
        while(temp2!=nullptr && temp2->next!=nullptr){
            temp1=temp1->next;
            temp2=temp2->next->next;
        }
        return temp1;

    }
};