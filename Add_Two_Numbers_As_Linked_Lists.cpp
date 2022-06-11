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

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node* ans= new Node(-1);
    Node* temp= ans;
    int carry =0;
    int sum;
    while(head1!= NULL || head2!=NULL || carry)
    {
        sum = 0;
        if(head1!=NULL)
        {
            sum += head1->data;
            head1=head1->next;
        }
        if(head2!=NULL)
        {
            sum += head2->data;
            head2 = head2->next;
        }
        sum += carry;
        carry = sum / 10;
        Node* n = new Node(sum%10);
        temp->next = n;
        temp = temp->next;
    }
    return ans->next;
}
