#include <stdio.h>

int main()
{
    //max(a,b,c)
    int a, b, c;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    if(a>b)
        if(a>c)
        printf("\na jest najwieksze");
    else
    printf("\nc jest najwieksze");
    else
        if(b>c)
        printf("\nb jest najwieksze");
    else
        printf("\nc jest najwieksze");

return 0;
 }
