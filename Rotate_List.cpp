#include <bits/stdc++.h> 
/********************************

    Following is the class structure of the Node class:
    
    class Node
    {
    	public:
    	    int data;
    	    Node *next;
    	    Node(int data)
    	    {
    	        this->data = data;
    	        this->next = NULL;
    	    }
    };

********************************/


Node *rotate(Node *head, int k) {
        if(head==NULL || head->next==NULL || k==0)  return head;
        Node* x=head;
        int n=0;
        while(x)
        {
            x=x->next;
            n++;
        }
        if(k>n)
        {
            k = k%n;
        }
        
        while(k)
        {
            Node* temp=head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            Node* newHead=temp->next;
            temp->next=NULL;
            newHead->next=head;
            head= newHead;
            k--;
        }
        return head;
}
