#include <iostream>
#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    /* data */
} nd;

void linklist_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "elements r : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
struct node *dltbetween(struct node *head, int index)
{
    struct node *p = head;

    for (int i = 0; i != index - 1; i++)
    {
        p = p->next;
    }
    struct node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}
int main()
{
    nd *head;
    nd *second;
    nd *third;
    nd *fourth;
    head = (nd *)malloc(sizeof(nd));
    second = (nd *)malloc(sizeof(nd));
    third = (nd *)malloc(sizeof(nd));
    fourth = (nd *)malloc(sizeof(nd));
    // link 1st and second node
    head->data = 7;
    head->next = second;
    // link 2nd nd 3rd node;
    second->data = 8;
    second->next = third;
    // link 2nd nd 3rd node;
    third->data = 5;
    third->next = fourth;

    fourth->data = 9;
    fourth->next = NULL;
    // traversal
    cout << "before deletion" << endl;
    linklist_traversal(head);
    cout << "after deletion" << endl;
    head = dltbetween(head, 2);
    linklist_traversal(head);

    return 0;
}