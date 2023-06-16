/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.

     if(!head || !head->next)
          return head;
     
     //calculate length
     int len=0;
     Node *curr=head;
     while(curr)
     {
          ++len;
          curr=curr->next;
     }

     if(k>=len)
          k=k%len;

     if(k==0)
          return head;

     /*
     3 Steps:- connect tail with head
     */

     //Node *oldhead=head;

     //find tail

     Node *tail=head;

     while(tail->next)
          tail=tail->next;
     tail->next=head;

     /*
     n-k th node from beginning= tail
     its next= newHead
     */

     //find n-k th node from begin

     Node *temp=head;

     for(int i=1;i<(len-k);++i){
          temp=temp->next;
     }

     head=temp->next;
     temp->next=NULL;



     return head;
}