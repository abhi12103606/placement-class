class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        
        if(!head ) return head;
        ListNode* curr=head,*p;
        int sz=1;
        
        while(curr){
            
            p=curr;
            vector<int> v;
            for(int i=0;i<sz && curr!=NULL;i++){
                v.push_back(curr->val);
                curr=curr->next;    
            }
            
            if(v.size()%2==0){
                reverse(v.begin(),v.end());
                for(int i=0;i<v.size();i++){
                    
                    p->val=v[i];
                    p=p->next;    
                }
                
            }
            sz++;
        }
        
        return head;
    }
};