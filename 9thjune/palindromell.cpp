#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> *middLeNode(LinkedListNode<int> *head){

    LinkedListNode<int> *slow=head,*fast=head;

    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}
LinkedListNode<int> *reverse(LinkedListNode<int> *node){

    if(!node || !node->next)
        return node;
    
    LinkedListNode<int> *t=reverse(node->next);
    node->next->next=node;
    node->next=NULL;

    return t;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(!head || !head->next)
        return true;
    LinkedListNode<int> *middle=middLeNode(head);
    
    middle->next=reverse(middle->next);

    middle=middle->next;

    LinkedListNode<int> *dummy=head;

    while(middle!=NULL){

        if(middle->data!=dummy->data)
            return false;

        middle=middle->next;
        dummy=dummy->next;
    }


    return true;



}