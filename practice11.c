#include<stdio.h>
int main()
{
    int marks[4];

   for( int i=0;i<4 ;i++)
   {
   printf("enter the value of marks %d\n",i);
   
   scanf("%d",&marks[i]);
   }

    for( int i=0;i<4 ;i++)
   {
   printf(" the value of marks %d of an array is%d\n",i,marks[i]);
   
   
   }
    return 0;

}
