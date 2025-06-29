
#include<stdio.h>
// #include<conio.h>
int main()
{
    int r,h;
    float area;
    float circum;

   
     printf("radius of circle:\n");
    scanf("%d",&r);

    printf("height of circle:\n");
    scanf("%d",&h);

      area= 3.14*r*r;
      circum=3.14*r*r*h;

     printf("cicumference of circle: %f\n",circum);
    printf("area of the circle: %f\n",area);

    return 0;

   
}
