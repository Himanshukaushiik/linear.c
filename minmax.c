#include<stdio.h>


int main(){
    int b[5];
    int min,max;
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


    min=max=b[0];
    for (int i = 0; i < 5; i++)
    {
        if (b[i]>max)
        {
            max = b[i];
            
        }else if (b[i]<min)
        {
            min = b[i];
        }
        
        
    }

    printf("\n");

    printf("\n the maximum number is %d \n",max);
    printf("\n the minimum number is  %d \n",min);
    
}