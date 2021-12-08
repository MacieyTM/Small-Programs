#include <stdio.h>
#include <math.h>

int main()
{
double x,y;

do{
printf("\nx=");
scanf("%lf",&x);
printf("y=");
scanf("%lf",&y);

//if(x*x+y*y>9||(y>x*x-3&&y<sin(x)&&x>=0&&y>=-3&&y<-2))
//printf("\nPoza obszarami\n\n");
//if(x*x+y*y==9||y==x*x-3||y==sin(x))
//printf("\nNa krzywej\n\n");


    if(y>x*x-3&&y>sin(x)&&y>=0)
    printf("\nObszar A\n\n");
    else if(y<x*x-3&&y>sin(x)&&x>=0)
    printf("\nObszar B\n\n");
    else if(y<x*x-3&&y>sin(x)&&x<0)
    printf("\nObszar C\n\n");
    else if(y>x*x-3&&y>sin(x)&&y<0)
    printf("\nObszar D\n\n");
    else if(y>x*x-3&&y<sin(x)&&y>=0)
    printf("\nObszar E\n\n");
    else if(y<x*x-3&&y<sin(x)&&x<0)
    printf("\nObszar F\n\n");
    else if(y>x*x-3&&y<sin(x)&&x<0)
    printf("\nObszar G\n\n");
    else if(y>x*x-3&&y<sin(x)&&x>=0&&y>=-2&&y<0)
    printf("\nObszar H\n\n");
    else if(y<x*x-3&&y<sin(x)&&y>=0)
    printf("\nObszar I\n\n");
    else if(y<x*x-3&&y<sin(x)&&x>=0&&y>=-3&&y<0)
    printf("\nObszar J\n\n");
}while(x!=0||y!=0);
}
