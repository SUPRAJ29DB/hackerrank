/* Strucutre of a link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertInMiddle(Node* head, int x) {
        if (head == nullptr) {
            return new Node(x);
        }

        Node* slow = head;
        Node* fast = head;

        // Move fast by 2 steps and slow by 1 step
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Insert the new node after slow
        Node* newNode = new Node(x);
        newNode->next = slow->next;
        slow->next = newNode;

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna