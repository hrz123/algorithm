//
// Created by Ruizhe Hou on 2020/10/13.
//

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        ListNode *dummy = new ListNode();
        dummy->next = head;
        ListNode *cur = dummy, *tmp, *firstNode, *secondNode;
        while (head != NULL && head->next != NULL) {
            firstNode = head;
            secondNode = head->next;
            cur->next = secondNode;
            firstNode->next = secondNode->next;
            secondNode->next = firstNode;

            cur = firstNode;
            head = firstNode->next;
        }
        return dummy->next;
    }
};