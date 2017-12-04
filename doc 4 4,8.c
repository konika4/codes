#include <stdio.h>
#include<conio.h>

int main (void)
{
    int number;
    scanf("%d", &number );

    switch (number){
    case 2:
    printf("you enter number is yes 2");
    break;
    case 4:
    printf("you enter number is yes 4");
    break;
    case 6:
    printf("you enter number is yes 6");
    break;
    case 8:
    printf("you enter number is yes 8");
    break;
     case 10:
    printf("you enter number is yes 10");
    break;
     case 20:
    printf("you enter number is yes 20");
    break;
     case 26:
    printf("you enter number is yes 26");
    break;
    default:
    printf(" NO not entered");
    break;
}
getch();
}

8
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, N;
    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}

