/* Structure for link list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int sumofNodes(Node* head, int n) {
        
        
        // Code Here
       int count = 0;
              Node* temp = head;

              while(temp != NULL) {
                  count++;
                  temp = temp->next;
              }

              int skip = count - n;
              temp = head;

              while(skip > 0) {
                  temp = temp->next;
                  skip--;
              }

              int sum = 0;

              while(temp != NULL) {
                  sum += temp->data;
                  temp = temp->next;
              }

              return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna