#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;

};
void display(struct node * ptr){
    while(ptr!=NULL){
        printf("element %d\n",ptr->data);
        ptr=ptr->next;
    }

}

struct node * DeleteAtEnd(struct node *head,int value){
    struct node *p=head;
    struct node *q=head->next;
    

    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;



    }
    if(q->data==value){
    p->next=q->next;

    free(q);
    }
    return head;

}
int main(){
      struct node * head;
    struct node * second ;
    struct node * third;
    struct node * forth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node ));
    forth=(struct node *)malloc(sizeof(struct node ));

    head->data=11;
    head->next=second;

    second->data=22;
    second->next=third;

    third->data=33;
    third->next=forth;

    forth->data=44;
    forth->next=NULL;

printf("before\n");
display(head);

head=DeleteAtEnd(head,33);

printf("after\n");
display(head);
    return 0;
}