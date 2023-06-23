// Link : https://www.codingninjas.com/studio/problems/intersection-of-two-linked-lists_8230688?challengeSlug=striver-sde-challenge&leftPanelTab=0

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }

            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

#include <bits/stdc++.h>
Node *findIntersection(Node *firstHead, Node *secondHead)
{
    Node *temp;

    while (firstHead != NULL)
    {
        temp = secondHead;

        while (temp != NULL)
        {
            if (firstHead == temp)
            {
                return firstHead;
            }
            temp = temp->next;
        }
        firstHead = firstHead->next;
    }

    // else return NULL not intersection

    return NULL;
}

/*
    Analysis:
    Time Complexity : O(m*n)
    Space Complexity : O(1)
*/

// optimised Solutions

#include <bits/stdc++.h>
Node *findIntersection(Node *headA, Node *headB)
{
    // Approach :
    // 1. we will calculate the number of nodes in both linkedList
    // 2. we will make the both the nodes same by substracting the number of nodes larger linkedList from the number of the smaller linkedList
    // 3. we will traverse from the start point after doing calculations when we find the intersection we will return this node else return null if the intersection not found

    int count1 = 0, count2 = 0;

    Node *curr = headA;

    // calculate the number of nodes in first linkedList
    while (curr)
    {
        count1++;
        curr = curr->next;
    }

    // Calculate the number of nodes in second linked list

    curr = headB;

    while (curr)
    {
        count2++;
        curr = curr->next;
    }

    int diff = abs(count1 - count2);

    if (count1 < count2)
    {
        while (diff--)
        {
            headB = headB->next;
        }
    }
    else
    {
        while (diff--)
        {
            headA = headA->next;
        }
    }

    // Now move the both the pointers by one positions

    Node *p1 = headA;
    Node *p2 = headB;

    while (p1 && p2)
    {
        if (p1 == p2)
        {
            return p1;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    return NULL;
}

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/