//write a c program to find sum numbers of even numbers between 1 to n

#include<stdio.h>
int main(){
    int n, i , sum =0;
    
    printf("Enter the numbers : ");
    scanf("%d",&n);

    for( i=2; i <=n ; i=i+2){
        sum = sum +i;
    }
    printf("Sum of even numbers = %d",sum);
    return 0;
}