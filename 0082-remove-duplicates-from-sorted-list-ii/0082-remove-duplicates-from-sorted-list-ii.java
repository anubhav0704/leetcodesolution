/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null) return null;

        HashMap<Integer, Integer> freq = new HashMap<>();
        ListNode temp = head;

        while (temp != null) {
            freq.put(temp.val, freq.getOrDefault(temp.val, 0) + 1);
            temp = temp.next;
        }
        ListNode dummy = new ListNode(0);
        dummy.next = head;

        ListNode prev = dummy;
        temp = head;

        while (temp != null) {
            if (freq.get(temp.val) > 1) {
                prev.next = temp.next;
            } else {
                prev = temp;
            }

            temp = temp.next;
        }

        return dummy.next;
    }
}