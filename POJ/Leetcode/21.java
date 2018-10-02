// Merge two sorted linked lists and return it as a new list. 
// The new list should be made by splicing together the nodes of 
// the first two lists.

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {        
        ListNode ptr = new ListNode(-1);
        ListNode head = ptr;
        
        while(l1!=null&&l2!=null){
            if(l1.val<l2.val){
                ptr.next = l1;                
                l1 = l1.next;
            }else{
                ptr.next = l2;
                l2 = l2.next;
            }            
            ptr = ptr.next;
        }
        
        ptr.next = l1 == null?l2:l1;
        return head.next;
    }
}