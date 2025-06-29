#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createMyArray(struct myArray *a,int t_size,int u_size)
{
    a->total_size=t_size;
    a->used_size=u_size;
    a->ptr= (int *)malloc(t_size * sizeof(int));

};

void show(struct myArray *a){
    for ( int i = 0; i <= a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
    
}

void setValue(struct myArray *a){
    int n;

    for (int  i = 0; i <= (a->used_size); i++)
    {
        printf("enter the value is: %d  ",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;


    }
    
}


int main(){
   struct myArray marks;
   createMyArray(&marks,10,2);
   
   printf(" the value of SetValue \n");
   setValue(&marks);
   printf(" the value of show \n");
   show(&marks );

    return 0;
}
