
//LL delete between

#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node * next;

};

void display(struct node * ptr){
    while(ptr!=NULL){
        printf("element %d\n ",ptr->data);
        ptr=ptr->next;

    }
}

struct node * DeleteAtBetween(struct node *head,int index){
    struct node * p= head;
    struct node * q= head->next;
    int i=0;
    while(i!=index-1){
        p=p->next;
        q=q->next;
    i++;
    }
    
    
    p->next=q->next;
    free(q);
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

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=forth;

    forth->data=4;
    forth->next=NULL;

printf("before\n ");
display(head);

head=DeleteAtBetween(head,2);

printf("after\n ");
display(head);
   
    return 0;

}