/*
    Link : https://www.codingninjas.com/studio/problems/delete-kth-node-from-end_8230725?challengeSlug=striver-sde-challenge&leftPanelTab=0

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
*/

Node *removeKthNode(Node *head, int n)
{

    Node *start = new Node();
    start->next = head;

    Node *f = start;
    Node *s = start;

    for (int i = 1; i <= n; i++)
    {
        f = f->next;
    }

    while (f->next != NULL)
    {
        f = f->next;
        s = s->next;
    }

    s->next = s->next->next;
    return start->next;
}