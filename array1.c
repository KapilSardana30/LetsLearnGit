#include<stdio.h>
int main(){
    int arr[5];
    printf("enter the values of array");
    printf("\nenter first value");
    scanf("%d",&arr[0]);
    printf("\nenter second value");
    scanf("%d",&arr[1]);
    printf("\nenter third value");
    scanf("%d",&arr[2]);
    printf("\nenter fourth value");
    scanf("%d",&arr[3]);
    printf("\nenter fifth value");
    scanf("%d",&arr[4]);
    printf("\nentered values are :\t ");
    for(int i =0;i<5;i++){
        printf("\t%d",arr[i]);
    
    
    }
    return(0);
}