/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node *slow = head;
        Node *fast = head;
        
        // Step 1: Detect cycle using Floyd's algorithm
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            
            // Cycle detected
            if (slow == fast) {
                int length = 1;
                Node *temp = slow;
                
                // Step 2: Count cycle length
                while (temp->next != slow) {
                    length++;
                    temp = temp->next;
                }
                return length;
            }
        }
        
        // No loop found
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna