/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* Reverse(Node *curr, Node *prev)
    {
        if(curr == NULL) return prev;
        
        Node *front = curr -> next;
        curr -> next = prev;
        return Reverse(front, curr);
    }
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        num1 = Reverse(num1, NULL);
        num2 = Reverse(num2, NULL);
        
        Node *curr1 = num1, *curr2 = num2;
        Node *head = new Node(0);
        Node *tail = head;
        
        int sum, carry = 0;
        //addition
        while(curr1 && curr2)
        {
            sum = curr1 -> data + curr2 -> data + carry;
            tail -> next = new Node(sum % 10);
            curr1 = curr1 -> next;
            curr2 = curr2 -> next;
            tail = tail -> next;
            carry = sum / 10;
        }
        while(curr1)
        {
            sum = curr1 -> data + carry;
            tail -> next = new Node(sum % 10);
            curr1 = curr1 -> next;
            tail = tail -> next;
            carry = sum / 10;
        }
        while(curr2)
        {
            sum = curr2 -> data + carry;
            tail -> next = new Node(sum % 10);
            curr2 = curr2 -> next;
            tail = tail -> next;
            carry = sum / 10;
        }
        
        while(carry)
        {
            tail -> next = new Node(carry % 10);
            tail = tail -> next;
            carry /= 10;
        }
        head = Reverse(head->next, NULL);
        
        while (head && head->data == 0 && head->next != NULL)
            head = head->next;
        return head;
    }
};
