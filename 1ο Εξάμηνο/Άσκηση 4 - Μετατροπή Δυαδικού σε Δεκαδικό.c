#include <stdio.h>
#include <math.h>
int main()
{
    int bin_num, leng_num, wrong_digits = 0, digit, sum = 0, bin_num1;
    scanf("%d", &bin_num);
    leng_num = log10(bin_num) + 1;
    bin_num1 = bin_num;
    for (int i = 0; i < leng_num; i++)
    {
        if (i != 0)
            bin_num1 = bin_num1 / 10;
        digit = bin_num1 % 10;
        sum = sum + digit * (int)pow(2,i);
        if (digit != 0 && digit != 1)
        {
            wrong_digits = 1;
        }
    }
    if (leng_num <= 5 && wrong_digits == 0 && bin_num1 >= 0)
    {
        printf("%d", sum);
    }
    else
    {
        printf("Wrong Input");
    }
    return 0;
}
