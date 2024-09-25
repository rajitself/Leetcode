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
    public ListNode modifiedList(int[] nums, ListNode head) {
        HashSet<Integer> set=new HashSet<>();
        for(var i:nums)
        set.add(i);
        ListNode temp=new ListNode(0);
        ListNode pre=temp; 
        temp.next=head;

        while(head!=null){
            if(set.contains(head.val)){
                pre.next=head.next;
               
            }else
            pre=head;
            head=head.next;
        }
        return temp.next;
    }
}