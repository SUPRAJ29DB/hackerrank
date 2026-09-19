/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* pairwiseSwap(Node* head) {
        // The task is to complete this method
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node * prev=NULL;
        Node * first=head;
        
        while(first!=NULL && first->next!=NULL){
            Node* second=first->next;
            Node *nextpair=second->next;
            
            second->next=first;
            first->next=nextpair;
            
            if(prev==NULL){
                head=second;
                
            }
            else{
                prev->next = second;
            }
            prev=first;
            first=nextpair;
        }
            return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna