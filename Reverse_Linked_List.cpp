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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *curr;
    LinkedListNode<int> *next;
    LinkedListNode<int> *prev;
    curr= head;
    next = NULL;
    prev = NULL;
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev= curr;
        curr= next;
    }
    return prev;
}
