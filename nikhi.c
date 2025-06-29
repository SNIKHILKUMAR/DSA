include<stdio.h>
int main()
{
char ch;
int a,b;
printf("chose the operator(+,-,*,/,%%):");
scanf("%c",&ch);
printf("Enter two number:");
scanf("%d%d",&a,&b);
switch(ch)
{
case'+':
printf("%d+%d=\t%d\n",a,b,a+b);
break;
case'-':
printf("%d-%d=\t%d\n",a,b,a-b);
break;
case'*':
printf("%d*%d=\t%d\n",a,b,a*b);
break;
case'/':
printf("%d/%d=\t%d\n",a,b,a/b);
break;
case'%':
printf("%d%%%d=\t%d\n",a,b,a%b);
break;
default:
printf("error invalid operator.");
}
return0;
}
