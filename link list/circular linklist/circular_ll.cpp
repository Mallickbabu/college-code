#include<iostream> 
#include<iostream> 
using namespace std;

 typedef struct node{\
   int data;
   struct node * next;
    /* data */
} nd;

void linklist_traversal(struct node * head){
    nd*ptr=head;
    do{
        cout<< "elements r : "<<ptr->data <<endl;
        ptr=ptr->next;
    }while(ptr!=head);
}



int main(){
    nd *head;
    nd *second;
    nd *third;
    nd *fourth;
    head= (nd*)malloc(sizeof(nd));
    second= (nd*)malloc(sizeof(nd));
    third= (nd*)malloc(sizeof(nd));
    fourth= (nd*)malloc(sizeof(nd));
    // link 1st and second node
    head->data=7;
    head->next=second;
    //link 2nd nd 3rd node;
    second->data=11;
    second->next=third;
    //link 2nd nd 3rd node;
    third->data=15;
    third->next=fourth;

    fourth->data=8;
    fourth->next=head;
    //traversal
    linklist_traversal(head);
    


return 0;
}