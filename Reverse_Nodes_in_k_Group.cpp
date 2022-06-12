#include <bits/stdc++.h> 
/****************************************************************

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

*****************************************************************/

int i=0;
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	if(head == NULL)    return NULL;
    
    Node* curr= head;
    Node* prev= NULL;
    Node* next = NULL;
    int count =0;
    while(curr!=0 && count<b[i])
    {
        next= curr->next;
        curr->next=prev;
        prev= curr;
        curr=next;
        count++;
    }
    i++;
    n--;
    if(next!=NULL && n!=0)
        head->next= getListAfterReverseOperation(next,n,b);
    
    return prev;
}
