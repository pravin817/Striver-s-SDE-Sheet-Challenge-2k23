// Link : https://www.codingninjas.com/codestudio/problems/reverse-linked-list_8230724?challengeSlug=striver-sde-challenge&leftPanelTab=0

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
    // if the list ie empty or it has only one node in this case return head

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    vector<int> v;

    LinkedListNode<int> *temp = head;

    // Load data in vector
    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }

    // Now reverse the data in vector
    reverse(v.begin(), v.end());

    // Insert the data into the Linked List
    temp = head;
    int i = 0;

    while (temp != NULL && i < v.size())
    {
        temp->data = v[i];
        temp = temp->next;
        i++;
    }

    // return the head
    return head;
}