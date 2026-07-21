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
 #include<iostream>
 using namespace std;
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>ans;

        ListNode*temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;

        }
            int p = 0;
            int q=ans.size()-1;
         
          while(p<q){
            if(ans[p]==ans[q]){
                p++;
                q--;
            }
            else{
                return false;
            }

          }
          return true;
        
    }
};