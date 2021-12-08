#include <stdio.h>
#include <math.h>

int main()
{
    //wyrazenia arytmetyczne
    double x=1.5, z=2.3, w, v, y;
    int i=2, j=3;

    printf("w=%lf\n", pow((x+2)/i,1.0/3.0) * pow(sin(x*x+z*z),2));
    printf("v=%lf\n", (log(x*x)+2*x*x+1/(z*z)) / ((x+z)*i) + (double)i/j);
    printf("y=%lf\n", x*log(x*x+1)/2 * pow(sin(2*x*x-1), 2));

    return;
}
