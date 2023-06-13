#include <bits/stdc++.h> 
#define max 1000
// Stack class.
class Stack 
{

public:
    int front,n,*a;

    Stack(){
        front=-1;
    }
    Stack(int capacity) {
        // Write your code here.
        a=new int[capacity];
        front=-1;
        n=capacity;
    }

    void push(int num) {
        // Write your code here.
        if(front==(n-1))
            return;
        else{
            ++front;
            a[front]=num;

        }
    }

    int pop() {
        // Write your code here.
        if(front==-1){
            return -1;
        }
        else{
            int x=a[front];
            --front;

            return x;
        }
    }
    
    int top() {
        // Write your code here.
        if(front==-1)
            return -1;
        return a[front];
    }
    
    int isEmpty() {
        // Write your code here.
        if(front==-1)
            return 1;
        return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(front==(n-1))
            return 1;
        return 0;
    }
    
};