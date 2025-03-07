#include<stdio.h>
int count (int arr[] ,int );


int count(int arr[],int n ){
    return n;}


    int positive(int arr[] ,int  n ){
    int no_of_positive = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            no_of_positive++;

        }
        
    }

    return no_of_positive++;
    
   
}


int main(){

int arr[]={1,2,3,-4,5,-6,7,8};
int n= sizeof(arr)/sizeof(arr[0]);
printf("%d",count(arr , n));
printf(" \n\n\nthese are the positive integers in this array %d\t " , positive(arr , n));
}
