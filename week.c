#include<stdio.h>
//#include(conio.h)
int main()
{ int day;
    printf("enter the day");
    scanf("%s",&day);
    switch (day ) {
        case 'm':
        printf("monday");
        break;
        case 't':
        printf("tuesday");
        break;
        case 'w':
        printf("wednesday");
        break;
        case  'T' :
        printf("thursday");
        break;
        case 'f':
        printf("friday");
        break;
        case 's':
        printf("saturday");
        break;
        case  'S' :
        printf("sunday");
        break;
        default : ("not valid day!");

        

    }
return 0;
}