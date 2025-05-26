class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node* newNode = new Node(data);
        
        // if empty list
        
        if(head == nullptr)
        {
            newNode -> next = newNode;
            return newNode;
        }

        // insert at starting
        
        Node* curr = head;
        
        if(data < head -> data)
        {
            while(curr -> next != head)
            {
                curr = curr -> next;
            }
            
            curr->next = newNode;
            newNode->next = head;
            head = newNode;
            return head;
        }
        
        //insert  in middle or end
        
        while (curr->next != head && curr->next->data < data) 
        {
            curr = curr->next;
        }
        newNode -> next = curr -> next;
        curr -> next = newNode;
        return head;
        
    }
};
