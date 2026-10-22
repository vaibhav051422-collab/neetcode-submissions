class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;

        queue<int> q;
        ListNode* temp = head;

        while(temp){
            q.push(temp->val);
            temp=temp->next;
        }

        temp=head;

        while(!q.empty()){
           
            temp->val = q.front();
            q.pop();
            temp=temp->next;

            if(q.empty()) break;

            
            int n = q.size();
            for(int i=0;i<n-1;i++){
                q.push(q.front());
                q.pop();
            }

            // last value
            temp->val = q.front();
            q.pop();
            temp=temp->next;
        }
    }
};