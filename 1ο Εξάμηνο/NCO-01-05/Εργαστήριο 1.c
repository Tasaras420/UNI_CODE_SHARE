#include <stdio.h>

int main() 
{
    float t,cel,fahr;
    char d;
    scanf ("%f %c",&t,&d);

  //  printf ("%f %c\n",t,d);

    if (d=='c')
    {
        cel = t;
        fahr = 9/5.0*cel+32;
    }
    else if (d=='f')
    {
        fahr =  t;
        cel = 5/9.0*(fahr-32);
    }
    else
    {
        fahr=0;
        cel=0;
    }

    if (fahr==0 && cel==0)
    {
        printf ("wrong input");
        return 1;
    }

    printf ("%3.1f°C, %3.1f°F",cel,fahr);

    return 0;
}
