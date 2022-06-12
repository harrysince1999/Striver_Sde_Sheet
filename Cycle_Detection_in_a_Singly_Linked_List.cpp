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

bool detectCycle(Node *head)
{
    if(head==NULL)
        return false;
    if(head->next == head)
        return true;
	Node* fast=head;
    Node* slow=head;
    while(fast!=NULL)
    {
       fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;
        if(fast== slow)
            return true;
        slow=slow->next;
    }
    return false;
}
