// CODE FOR PRINT THE TABLE USING ARRAY 


#include<stdio.h>

int main (){

    int n1,n2,n3,n4;
    printf("enter the values = ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

int arr[4][10];
int mul[]={n1 ,n2 ,n3 ,n4};


for (int i = 0; i < 4; i++)
{
    for (int  j = 0; j < 10; j++)
    {
        arr[i][j]= mul[i] * (j+1);
    }
    
}
for (int i = 0; i < 4; i++)
{
    for (int  j = 0; j < 10; j++)
    {
        printf("\nthe value of arr[i]*[j] is %d\n",arr[i][j]);
    }
    printf("\n");
}

}