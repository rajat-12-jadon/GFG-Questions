/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        int count = 0;
        struct Node* current = head;
        
        while(current != 0)
        {
            if(current->data == key)
            {
                count++;
            }
            current = current->next;
        }
        return count;
    }
};
