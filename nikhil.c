#include<stdio.h>
void main()
{
int n,i,j;
printf("enter rows\n");
scanf("%d",&n);
for(i=1;i<=n;i++) 
    {for(j=1;j<=2*i-1;j++)
    
   { printf("-");
   }
for(j=1;j<=(n-i);j++)
{ printf("*");
}
   printf("\n");
}

   for(i=1;i<=n;i++)
 
{for(j=1;j<=2*(n-i)+1;j++)
{ printf("-");
}
for(j=1;j<=i-1;j++)
{ printf("*");
}
printf("\n");
}

getchar();

}