// #include<stdio.h>
// #include<stdlib.h>

// struct myArray
// {
//    int total_size;
//    int used_size;
//    int *ptr;

// };

// void createArray(struct myArray * a,int t_size,int u_size){
//     a->total_size=t_size;
//     a->used_size=u_size;
//     a->ptr=(int *)malloc(t_size* sizeof(int ));

// }

// void show(struct myArray *a){
//     for(int  i = 0; i <=(a->used_size); i++)
//     {
//        printf("%d\n", (a->ptr)[i]);
      
//     }
    

// }

// void setval(struct myArray *a){
//     int n;

//     for(int  i = 0; i <=(a->used_size); i++)
//     {
//        printf("enter the value: %d  ",i);
//        scanf("%d",&n);
//         (a->ptr)[i]=n;

//     }
    

// }


// int main()
// {
//     struct myArray marks;
//     createArray(&marks,10,2);
//     printf(" the value of setval \n");
//     setval(&marks);
//     printf("the value of show\n");
//     show(&marks);


//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
}

int insertion(int arr[],int size,int element,int index,int capacity){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main(){
    int arr[100]= {1,2,3,4,5};
    int size=5,element=45,index=1;
    display(arr,size);
    insertion(arr,size,element,index,100);
    size=size+1;
    display(arr,size);
}