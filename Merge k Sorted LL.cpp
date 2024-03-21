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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* curr=new ListNode();
        ListNode* temp=curr;

        vector<int> helper;
        for(int i=0;i<lists.size();i++){
            for( ; lists[i] ; lists[i]=lists[i]->next){
                helper.push_back(lists[i]->val);
            }
        }
        sort(helper.begin(),helper.end());
        for(auto i:helper){
            ListNode* x=new ListNode(i);
            temp->next=x;
            temp=temp->next;
        }
        return curr->next;
    }
};
