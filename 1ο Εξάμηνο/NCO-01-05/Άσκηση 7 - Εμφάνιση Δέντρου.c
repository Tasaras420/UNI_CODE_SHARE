#include <stdio.h>

int main()
{
    int n, a_count = 1, spaces;
    char asteraki = '*';
    scanf("%d", &n);
    spaces = n - 1;
    if (n <= 0 || n >= 11)
    {
        printf("Wrong Input");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int h = 0; h < spaces; h++)
                {
                    printf(" ");
                }
            spaces -= 1;
            for (int j = 0; j < a_count; j++)
            {
                printf("%c", asteraki);
            }
            a_count += 2;
            if (i !=  n - 1)
                printf("\n");
        }
    }
    return 0;
}