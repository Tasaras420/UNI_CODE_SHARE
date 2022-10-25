#include <stdio.h>

int main()
{
    int day_month, day;
    char day_week[7][25] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    scanf("%d", &day_month);
    if (day_month < 1 || day_month > 31)
    {
        printf("Wrong Input");
    }
    else
    {
        if (day_month < 8)
        {
            day = day_month - 1;
        }
        else if (day_month < 15)
        {
            day = day_month - 8; 
        }
        else if (day_month < 22)
        {
            day = day_month - 15;
        }
        else if (day_month < 29)
        {
            day = day_month - 22;
        }
        else
        {
            day = day_month - 29;
        }
        printf("%s", day_week[day]);
    }
    return 0;
}