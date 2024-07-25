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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while (curr != NULL) {
            ListNode* nextTemp = curr->next; 
            curr->next = prev; 
            
            prev = curr;
            curr = nextTemp;
        }
        return prev;
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
    ListNode* result = work.reverseList(&a);
    while (result != NULL) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;
    return 0;
}