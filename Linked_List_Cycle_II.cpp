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

Node *firstNode(Node *head)
{
    if(head==NULL)    return NULL;
    if(head->next == NULL)
        return NULL;
    if(head->next == head)
        return head;
    Node* fast=head;
    Node* slow=head;
    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;

        slow=slow->next;
        
        if(slow==fast)
        {
            fast=head;
            while(slow!=fast )
            {
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
