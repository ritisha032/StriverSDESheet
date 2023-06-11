#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int> *result=NULL;

    if(!first)
        return second;
    if(!second)
        return first;

    if(first->data <= second->data){
        result=first;
        result->next=sortTwoLists(first->next,second);
    }
    else{
        result=second;
        result->next=sortTwoLists(first,second->next);
    }

    return result;
}
