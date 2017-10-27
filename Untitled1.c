#include<stdio.h>
int main()
{

    int a, start, end;
    printf("enter the starting value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);

    for(a=start; a>=end; a--)
    {
        printf("%d\n", a);
    }

    return 0;
}


