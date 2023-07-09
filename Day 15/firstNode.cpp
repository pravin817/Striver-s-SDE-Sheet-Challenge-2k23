/*
    Problem Link : https://www.codingninjas.com/studio/problems/linked-list-cycle-ii_8230823?challengeSlug=striver-sde-challenge&leftPanelTab=0
    Date : 09/07/2023
*/

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

Node *firstNode(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;
    Node *entry = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        // we detect the cycle in the linkedlist
        if (slow == fast)
        {

            while (slow != entry)
            {
                slow = slow->next;
                entry = entry->next;
            }
            return entry;
            ;
        }
    }
    return NULL;
}

/*
    Analysis:
    Time Complexity : O(n)
    Space Complexity : O(1)
*/