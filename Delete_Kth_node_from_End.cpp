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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    if(head == NULL)
        return head;
    if(K!=0)
    {
     LinkedListNode<int>* temp=head;
    int count =0;
    while(temp!=NULL)
    {
        count++;
        temp= temp->next;
    }
    int x= count - K ;
    if(x==0)
    {
        head= head->next;
    }
    else
    {
            temp = head;
    while(x>1)
    {
        x--;
        temp = temp->next;
    }
    temp->next = temp->next->next;
    }
    }
    return head;
}
