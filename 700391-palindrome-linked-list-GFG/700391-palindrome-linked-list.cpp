/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
   Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;

        while (curr)
        {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
    bool isPalindrome(Node *head) {
         if(head == NULL || head->next == NULL)
            return true;

        Node* slow = head;
        Node* fast = head;

        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* second = reverse(slow->next);

        Node* first = head;

        while(second != NULL)
        {
            if(first->data != second->data)
                return false;

            first = first->next;
            second = second->next;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna