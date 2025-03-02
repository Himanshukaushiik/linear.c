#include <stdio.h>

int main()
{

    int b[5], found = 0;
    int num;
    printf("ENTER THE FIVE ELEMENTS = \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("\nTHE VALUES YOU ENTERED = \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", b[i]);
        printf("\t");
    }

    printf("\nenter the element to be search = \n");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++)
    {
        if (b[i] == num)
        {
            printf("the elements is found at index =%d\n", i);
            found= 1;
            break;
        }
    }

    if ( !found)
    {
        printf("the number you entered not in the list\n");
    }
}