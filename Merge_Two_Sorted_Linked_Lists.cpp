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
    Node<int>* head1 = first;
    Node<int>* head2 = second;
    Node<int>* ans= new Node<int>(-1);
    Node<int>* temp = ans;
    
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data < head2->data)
        {
            temp->next= head1;
            head1= head1->next;
        }
        else
        {
            temp->next = head2;
            head2= head2->next;
        }
        temp=temp->next;
    }
    while(head1!=NULL)
    {
        temp->next = head1;
        head1= head1->next;
        temp = temp->next;
    }
    while(head2!=NULL)
    {
        temp->next = head2;
        head2= head2->next;
        temp = temp->next;
    }
    return ans->next;
}

