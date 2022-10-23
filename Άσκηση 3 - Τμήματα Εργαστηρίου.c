#include <stdio.h>

int main()
{
    int aem, class;
    scanf("%d", &aem);
    if (aem > 0)
    {   
        class = aem % 3 + 1;
        printf("C%d",class);
    }
    else
    {
        printf("Wrong Input");
    }
    return 0;
}