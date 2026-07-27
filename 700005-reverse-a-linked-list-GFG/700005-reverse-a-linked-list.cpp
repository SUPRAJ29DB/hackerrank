/* Structure of Linked List Node
class Node {
	public:
	int data ;
	Node *next ;
	
	Node(int x) {
		data = x ;
		next = nullptr ;
	}
};
*/

class Solution {
	public:
	Node* reverseList(Node* head) {
		// code here
		Node* prev = NULL;
		Node* curr = head;
		Node* next = NULL;
		while (curr != NULL) {
			next = curr->next;
			curr ->next=prev;
			prev = curr;
			curr = next;
		}
		return prev;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna