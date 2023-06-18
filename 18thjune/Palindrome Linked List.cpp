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
LinkedListNode<int> *reverse(LinkedListNode<int> *h){

    if(h==NULL || h->next==NULL)
        return h;
    LinkedListNode<int> *rest=reverse(h->next);
    h->next->next=h;
    h->next=NULL;

    return rest;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL)
        return true;
    
    LinkedListNode<int>* slow = head;
     LinkedListNode<int>* fast = head;
        
    while(fast->next!=NULL&&fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    slow = slow->next;
     LinkedListNode<int>* dummy = head;
        
    while(slow!=NULL) {
        if(dummy->data != slow->data) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;

}