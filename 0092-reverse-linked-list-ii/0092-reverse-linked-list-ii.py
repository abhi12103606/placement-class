class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        if head.next is None or left == right:
            return head

        dummy = ListNode(0)
        dummy.next = head
        predecessor = dummy

        for _ in range(left - 1):
            predecessor = predecessor.next
        reverse_start = predecessor.next
        current = reverse_start
        prev = None

        for _ in range(right - left + 1):
            next_temp = current.next
            current.next = prev
            prev = current
            current = next_temp

        predecessor.next = prev
        reverse_start.next = current

        return dummy.next