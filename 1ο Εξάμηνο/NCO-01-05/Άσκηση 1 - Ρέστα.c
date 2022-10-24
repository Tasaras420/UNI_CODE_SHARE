#include <stdio.h>

int main()
{
    double money, tickets_value;
    int tickets;
    int coins[7] = {200, 100, 50, 20, 10, 5, 1};
    scanf("%d %lf", &tickets, &money);
    tickets_value = 0.75 * tickets;
    if ((money < 0.75 || money > 100.0) || (tickets < 1 || tickets > 5) || (money < tickets_value))
    {
        printf("Wrong input\n");   
    }
    else
    {
       int change = (int)(money * 100) - (int)(tickets_value * 100);
       for (int i = 0; i < 7; i++)
       {
            int count = change / coins[i];
            change = change % coins[i];
            if (count != 0)
            {
                if (i < 2)
                {
                    printf("%d * %d euros\n", count, coins[i] / 100);
                }
                else
                {
                    printf("%d * %d cents\n", count, coins[i]);
                }
            }


       }
    }
            return 0;
        
}
