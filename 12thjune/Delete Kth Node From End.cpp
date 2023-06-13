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

/*

logic:-
traverse k length first using slow ptr
then remaining length=n-k
then keep a fast ptr and traverse till slow ptr reaches tail
in this way slow ptr will be at the required node

for edge case where k==length of linked list
use a dummy node

*/
Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    if(!head || !head->next)
        return NULL;
    Node *start=new Node();
    start->next=head;

    Node *fast=start;
    Node *slow=start;

    for(int i=1;i<=K;++i){
        fast=fast->next;
    }

  //  cout<<"\n fast pointing at "<<fast->data;
    
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }

    slow->next=slow->next->next;

    return start->next;
        
    
}
