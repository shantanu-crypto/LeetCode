/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* temp,*ptr;
        temp=head;
        ptr=head;
        
        while(temp){
            cnt++;
            temp=temp->next;
        }
        
        // cout<<cnt<<endl;
        ListNode* node;
        if(n==cnt){
            node=head;
            head=head->next;
        }
        int fromBeg=cnt-n;
        cnt=0;
        while(ptr){
            cnt++;
            if(cnt==fromBeg){
                node=ptr->next;
                ptr->next=ptr->next->next;
                delete(node);
                break;
            }
            ptr=ptr->next;
        }
        return head;
    }
};