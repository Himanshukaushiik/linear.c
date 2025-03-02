#include<stdio.h>

int main(){

    int b[10];
    printf("ENTER THE 10 ELEMENTS = \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("\nTHE VALUES YOU ENTERED = \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d", b[i]);
        printf("\t");
    }


    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum+= b[i];


    }
    

    printf("\nthe sum of This Array is = %d\n",sum);
    return 0;
}