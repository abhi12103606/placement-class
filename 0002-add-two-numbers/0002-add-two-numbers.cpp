class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int val;
        ListNode* post= new ListNode();
        ListNode* res= post;
        int total=0, carry=0;
        while(l1 || l2 || carry){
            total=carry;

            if (l1){
                total += l1->val;
                l1=l1->next;
            }
            if (l2){
                total+=l2->val;
                l2=l2->next;
            }

            int num=total%10;
            carry = total / 10;
            post->next = new ListNode(num);
            post = post->next;
        }

        ListNode* result = res->next;
        delete res;
        return result;
    }
};