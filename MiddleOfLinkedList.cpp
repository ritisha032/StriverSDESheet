/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    if(!head || !head->next)
        return head;
    Node *slow=head,*fast=head->next;

    while(fast->next && fast->next->next){
      slow=slow->next;
      fast=fast->next->next;
    }

    return slow->next;
}

