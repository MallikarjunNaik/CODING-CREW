/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
      if (head == null || head.next == null) {
            return false;
        }
        ListNode t = head;
        ListNode r = head;

        while (r != null && r.next != null) {
            t = t.next;
            r = r.next.next;

            if (t == r) {
                return true;
            }
        }
        return false;}
}
