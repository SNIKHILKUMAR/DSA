#include<stdio.h>

void display(int arr[],int n){


    for (int  i = 0; i <n; i++)
    {
        printf("%d \n",arr[i]);

    }


}

int main()
{
    int arr[100] ={1,3,5,56};
    display(arr,4);
    return 0;
}


// #include<stdio.h>

// void display(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
// }

// int main(){
//     int arr[100]={1,2,3,4,5};
//     display(arr,4);
//     return 0;

// }