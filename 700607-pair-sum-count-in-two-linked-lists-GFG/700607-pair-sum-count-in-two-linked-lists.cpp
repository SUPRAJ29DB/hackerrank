/* Structure of a link list node
class Node {
  public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
public:
    int countPairs(Node* head1, Node* head2, int x) {
        // Step 1: Insert all elements of the first linked list into an unordered_set
        std::unordered_set<int> firstListElements;
        Node* temp1 = head1;
        while (temp1 != nullptr) {
            firstListElements.insert(temp1->data);
            temp1 = temp1->next;
        }

        // Step 2: Traverse the second linked list and check for complements
        int count = 0;
        Node* temp2 = head2;
        while (temp2 != nullptr) {
            int complement = x - temp2->data;
            if (firstListElements.find(complement) != firstListElements.end()) {
                count++;
            }
            temp2 = temp2->next;
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna