# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if head == None or head.next == None:
            return head
        node = ListNode(0)
        node.next = head
        for i in range(1,k+1):
            test = node
            count = 1
            while test.next.next!=None:
                test = test.next
                count += 1
            temp = test.next
            test.next = None
            temp.next = node.next
            node.next = temp
            cal = k % count
            if cal == i:
                break
        return node.next
        
            