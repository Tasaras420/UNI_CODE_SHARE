#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    if (year <= 0)
    {
        printf("Wrong Input\n");
    }
    else
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 != 0)
                {
                    printf("Normal\n");
                }
                else
                {
                    printf("Leap\n");
                }
             }
            else
            {
                printf("Leap\n");
            }
        }
        else
        {
            printf("Normal\n");
        }
    }
    return 0;
}
