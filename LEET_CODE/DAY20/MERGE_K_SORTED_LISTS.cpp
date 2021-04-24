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
bool compare(ListNode* a,ListNode* b){
    return a->val>b->val;
}
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<ListNode *> v;
        ListNode* ans = new ListNode(0);
        ListNode* p=ans;
        for(auto i:lists)
            if(i)v.push_back(i);
        make_heap(v.begin(),v.end(),compare);
        while(v.size()>0){
            p->next=v.front();
            pop_heap(v.begin(),v.end(),compare);
            v.pop_back();
            p=p->next;
            if(p->next){
                v.push_back(p->next);
                push_heap(v.begin(),v.end(),compare);
            }
        }
        return ans->next;
    }
};
