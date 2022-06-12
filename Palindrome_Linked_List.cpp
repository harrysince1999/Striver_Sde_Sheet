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

bool isPalindrome(LinkedListNode<int> *head) {
        vector<int>arr;
        LinkedListNode<int>* temp=head;
        int size=0;
        while(temp)
        {
            size++;
            temp=temp->next;
        }
        while(head)
        {
            arr.push_back(head->data);
            head=head->next;
        }
        int j=size-1;
        for(int i=0;i<size && i<=j;i++)
        {
            if(arr[i]!=arr[j])
                return false;
            j--;
        }
        return true;

}
