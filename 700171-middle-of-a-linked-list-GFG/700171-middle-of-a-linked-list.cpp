/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node *fast=head;
        Node *slow=head;
        
        if(head==NULL){
            return -1;
        }
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna