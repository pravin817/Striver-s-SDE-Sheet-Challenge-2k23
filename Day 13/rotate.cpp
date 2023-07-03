/*
    Link 1 : https://www.codingninjas.com/studio/problems/rotate-linked-list_8230752?challengeSlug=striver-sde-challenge&leftPanelTab=0
    Link 2 : https://leetcode.com/problems/rotate-list/description/

    61. Rotate List
    Medium

    Given the head of a linked list, rotate the list to the right by k places.


    Example 1:


    Input: head = [1,2,3,4,5], k = 2
    Output: [4,5,1,2,3]
    Example 2:


    Input: head = [0,1,2], k = 4
    Output: [2,0,1]

    Constraints:

    The number of nodes in the list is in the range [0, 500].
    -100 <= Node.val <= 100
    0 <= k <= 2 * 109
*/

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k)
{
    // Edge case
    // 1) If linkedList is Null
    // 2) Only one Node present
    // 3) k = 0

    if (!head || !head->next || k == 0)
    {
        return head;
    }

    // count the number of nodes in linkedList

    int len = 1;

    Node *temp = head;
    while (temp->next)
    {
        len++;
        // move to next node

        temp = temp->next;
    }

    // Make the change in K if k is larger than length i.e number of nodes in linkedList

    // go to that node

    temp->next = head;
    k = k % len;
    k = len - k;

    while (k--)
    {
        temp = temp->next;
    }

    // Make the node head and break connection

    head = temp->next;
    temp->next = NULL;

    // return the head

    return head;
}

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/