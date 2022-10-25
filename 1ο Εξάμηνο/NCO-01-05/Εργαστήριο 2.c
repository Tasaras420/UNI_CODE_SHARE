#include <stdio.h>

int main()
{
    int n, n_copy, bin_n[5], bin_d, count = 0;
    scanf("%d", &n);
    n_copy = n;
    if (n < 0 || n > 31)
    {
        printf("Wrong Input");
    }
    else if (n == 0)
    {
        printf("%d", 0);
    }
    else
    {
        int i = 0;
        while (n_copy != 0)
        {
            bin_d = n_copy % 2;
            bin_n[i] = bin_d;
            count ++;
            n_copy = n_copy / 2;
            i ++;   
        }
        for (int i = count - 1; i >= 0; i--)
        {
            printf("%d", bin_n[i]);
        }
    }
    return 0;
}