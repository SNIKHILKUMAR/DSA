#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;

};

void linkedListTraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("element %d \n",ptr->data);
        ptr=ptr->next;

    }

}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;

    head=(struct node*)malloc(sizeof(struct node ));
    second=(struct node*)malloc(sizeof(struct node ));
    third=(struct node*)malloc(sizeof(struct node ));
    forth=(struct node*)malloc(sizeof(struct node ));

    //link first and second node 
    head->data=55 ;
    head->next=second;

    //link second AND third node
    second->data=66;
    second->next=third;

    //link third and fourth node 
    third->data=77;
    third->next=forth;

    //terminate the list at the forth node 
    forth->data=88;
    forth->next=NULL;

    linkedListTraversal(head);


    


    return 0;
}
