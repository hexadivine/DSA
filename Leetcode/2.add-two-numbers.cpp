/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *head = NULL;
        ListNode *l3 = new ListNode();
        head = l3;

        int carry = 0;
        int sum = 0;

        while (l1->next != NULL && l2->next != NULL) {

            sum = l1->val + l2->val + carry;
            carry = sum/10;
            l3->val = sum%10;

            l3->next = new ListNode();
            l3 = l3->next;
            // l1 = l1->next;
            // l2 = l2->next;
            // l3 = l3->next;
        }

        return head;

    }
};
// @lc code=end

