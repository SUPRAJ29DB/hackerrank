/* Structure of Linked List Node
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
    void removeLoop(Node* head) {
        // code here
         if(head == NULL)
        return;

    Node *slow = head;
    Node *fast = head;

    // Detect Loop
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
            break;
    }

    // No Loop
    if(fast == NULL || fast->next == NULL)
        return;

    // Find Start of Loop
    slow = head;

    while(slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Find Last Node
    Node* temp = slow;

    while(temp->next != slow)
    {
        temp = temp->next;
    }

    // Remove Loop
    temp->next = NULL;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna