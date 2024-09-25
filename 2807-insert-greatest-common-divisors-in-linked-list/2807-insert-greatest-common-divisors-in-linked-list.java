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
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        ListNode slow=head;
        ListNode fast=slow.next;
        while(fast!=null){
            ListNode temp=new ListNode(gcd(slow.val,fast.val),fast);
            slow.next=temp;
            slow=fast;
            fast=slow.next;
        }
        return head;
    }
    int gcd(int a,int b){
        int result = Math.min(a, b);
        while (result > 0) {
            if (a % result == 0 && b % result == 0) {
                break;
            }
            result--;
        }
        return result;
    }
}