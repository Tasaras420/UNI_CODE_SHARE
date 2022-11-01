#include <stdio.h>
#include <math.h>

int main()
{
    int n, leng, digit, sum;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Wrong Input");
    }
    else
    {
        leng = log10(n) + 1;
        sum = 0;
        for (int i = leng-1; i >= 0; i--)
        {
               digit = n / (int)pow(10,i) % 10;
               sum = sum + (int)pow(digit, leng);
        }
        if (sum == n)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
}