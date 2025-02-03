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
    public ListNode reverseList(ListNode rev) {
      ListNode fast=null;
      ListNode temp;
      while(rev!=null){
        temp=rev;
        rev=rev.next;
        temp.next=fast;
        fast=temp;
      }
        return fast;
    }
}