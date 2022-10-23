#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    double fx;
    scanf("%d",&x);
    if (x != 3)
    {
       fx = (pow(x,2) - 3) / ((double)x - 3); 
       printf("%.1lf",fx);
         
    }
    else 
    {
        printf("Infinite");
    }
    return 0;
}
