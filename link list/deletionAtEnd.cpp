#include<iostream> 
#include<iostream> 
using namespace std;

 typedef struct node{\
   int data;
   struct node * next;
    /* data */
} nd;

void linklist_traversal(struct node * ptr){
    while(ptr!=NULL){
        cout<< "elements r : "<<ptr->data <<endl;
        ptr=ptr->next;
    }
}
struct node *dltEnd(struct node *head){
    struct node*p=head;
    struct node*q=p->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
     }
    
    p->next=NULL;
    free(q);
    return head;
}
int main(){
    nd *head;
    nd *second;
    nd *third;
    head= (nd*)malloc(sizeof(nd));
    second= (nd*)malloc(sizeof(nd));
    third= (nd*)malloc(sizeof(nd));
    // link 1st and second node
    head->data=7;
    head->next=second;
    //link 2nd nd 3rd node;
    second->data=8;
    second->next=third;
    //link 2nd nd 3rd node;
    third->data=5;
    third->next=NULL;
    //traversal
    cout<<"before deletion"<<endl;
    linklist_traversal(head);
    cout<<"after deletion"<<endl;
    head=dltEnd(head);
    linklist_traversal(head);


return 0;
}