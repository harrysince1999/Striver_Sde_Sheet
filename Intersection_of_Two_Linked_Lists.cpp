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

int findIntersection(Node *firstHead, Node *secondHead)
{
    Node* a= firstHead;
    int c1=0;
    Node* b= secondHead;
    int c2=0;
    while(a)
    {
        a=a->next;
        c1++;
    }
    while(b)
    {
        b=b->next;
        c2++;
    }
    if(c1<c2)
    {
        int x=c2-c1;
        while(x)
        {
            secondHead=secondHead->next;
            x--;
        }
        while(firstHead!=secondHead)
        {
            firstHead= firstHead->next;
            secondHead= secondHead->next;
        }
        if(firstHead==NULL)
            return -1;
        else
        return firstHead->data;
    }
    else
    {
        int x=c1-c2;
        while(x)
        {
            firstHead=firstHead->next;
            x--;
        }
        while(firstHead!=secondHead)
        {
            firstHead= firstHead->next;
            secondHead= secondHead->next;
        }
        if(firstHead==NULL)
            return -1;
        else
        return firstHead->data;
    }
}
