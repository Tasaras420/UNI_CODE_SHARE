#include <stdio.h>

int main()
{
    int n;
    char k;
    scanf("%d %c", &n, &k);
    if (n <= 0 || !(k >= 'a' && k <= 'z'))
    {
        printf("Wrong Input");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%c", k);
            if (i % 5 == 0 && i != n)
            {
                printf(" ");
            }
        }
        printf(".");
    }
    return 0;
}