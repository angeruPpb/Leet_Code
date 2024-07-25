#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == NULL)
            return NULL;
        int i = 0;
        for (ListNode* p = head;p != NULL;p=p->next,i++);

        ListNode* tmp = head;
        for (int j = 1;j < i/2;j++,tmp = tmp->next);
        
        tmp->next = tmp->next->next;
        return head;
    }
};

int main() {
    Solution work;
    ListNode a(1);
    ListNode b(2);
    ListNode c(3);
    ListNode d(4);
    ListNode e(5);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    ListNode* result = work.deleteMiddle(&a);
    while (result != NULL) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;
    return 0;
}