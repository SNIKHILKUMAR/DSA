// ll delete first

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next ;
};

void display(struct node * ptr){
    while(ptr!=NULL){
        printf(" element %d \n",ptr->data);
        ptr=ptr->next;
    }
}

struct node * deleteAtFirst(struct node *head){
    struct node *p=head;
    head= head->next;
    free(p);
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

printf("before\n");
display(head);

head=deleteAtFirst(head);

printf("after\n");
display(head);

    return 0;

}










//ll delete end

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

struct node * DeleteAtEnd(struct node *head){
    struct node *p=head;
    struct node *q=head->next;
    

    while(q->next!=NULL){
        p=p->next;
        q=q->next;



    }
    p->next=NULL;
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

printf("before\n");
display(head);

head=DeleteAtEnd(head);

printf("after\n");
display(head);
    return 0;
}