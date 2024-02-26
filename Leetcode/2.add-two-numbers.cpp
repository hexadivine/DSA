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

        ListNode *head = new ListNode(-1);
        ListNode *traverser = head;

        int carry = 0;
        int sum = 0;

        while (l1 && l2) {

            sum = l1->val + l2->val + carry;
            carry = sum/10;
            sum = sum%10;

            if (head->val == -1) {
                head->val = sum;
            }
            else {
                ListNode* sumNode = new ListNode(sum);
                traverser->next = sumNode;
                traverser = sumNode;
            }

            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1) {
            sum = l1->val + carry;
            carry = sum/10;
            sum = sum%10;

            ListNode* sumNode = new ListNode(sum);
            traverser->next = sumNode;
            traverser = sumNode;

            l1 = l1->next;
        }

        while (l2) {
            sum = l2->val + carry;
            carry = sum/10;
            sum = sum%10;

            ListNode* sumNode = new ListNode(sum);
            traverser->next = sumNode;
            traverser = sumNode;

            l2 = l2->next;
        }

        if (carry != 0) {
            ListNode* sumNode = new ListNode(carry);
            traverser->next = sumNode;
            traverser = sumNode;
        }

        return head;

    }
};
// @lc code=end

