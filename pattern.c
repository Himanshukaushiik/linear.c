#include<stdio.h>

int main (){
 int a;

 printf("enter 0 to get the triangular matrix or \n enter the 1 to get the reversed triangular matrix = ");
 scanf("%d" , &a);
    if (a==0)
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <=i ; j++)
            {
                printf("*");
                
            }
            
            printf("\n");
        } 
    } else if (a==1)
    {
        for (int i = 5; i >=1; i--)
{
    for (int j = 1; j <=i ; j++)
    {
        printf("*");
        
    }
    
    printf("\n");
}
    } else{

        printf("you entered a invalid number !! \n PLEASE SELECT 0 OR 1 !!! ");
    }
    
    


// for (int i = 1; i <= 5; i++)
// {
//     for (int j = 1; j <=i ; j++)
//     {
//         printf("*");
        
//     }
    
//     printf("\n");
// }

// printf("\n\n\n\n\n");


// for (int i = 5; i >=1; i--)
// {
//     for (int j = 1; j <=i ; j++)
//     {
//         printf("*");
        
//     }
    
//     printf("\n");
// }


}