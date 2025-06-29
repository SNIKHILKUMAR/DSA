// worst case (time complexity)=  O(1)
// LL insertion

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insertionList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element %d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct node * insertAtFirst(struct node *head,int data){
    struct node * ptr = (struct node * )malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
   
    return ptr;

}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    head->data=55;
    head->next=second;

    second->data=66;
    second->next=third;

    third->data=77;
    third->next=NULL;

    insertionList(head);
    printf("\n");
    head=insertAtFirst(head,67);
    insertionList(head);


    return 0;
}