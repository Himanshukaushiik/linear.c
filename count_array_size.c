#include<stdio.h>
int count (int arr[] ,int );


int count(int arr[],int n ){

    return n ;
   
}


int main(){

int arr[]={1,2,3,4,5,6,7,8};
int n= sizeof(arr)/sizeof(arr[0]);
printf("%d",count(arr , n));
}
