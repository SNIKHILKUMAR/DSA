#include<stdio.h>
int main()
{
    int i,a=65;
    char j;

    for(i=1; i<=10; i++)
          {
        for(j=1; j<=10-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {if(a==123)
            {
                a=65;
            }
            if(a==91)
            {   a=97;}
            
            printf("%c",a);
            a++;
            }
        

        printf("\n");
    }

    return 0;
}