/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node *fast=head;
        Node *second=head;
        for(int i=0;i<k;i++){
            if(fast==nullptr)
                return -1;
                fast=fast->next;
            
        }
        while(fast!=nullptr){
            fast=fast->next;
            second=second->next;
            
        }
        return second->data;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna