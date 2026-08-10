//count a digit of numbers using while loops
#include<stdio.h>
int main(){
    int n, count =0;
    printf("enter the numbers : ");
    scanf("%d", &n);

    if( n == 0){
        count =1;
    }else{
        while (n != 0){
            n= n /10;
            count++;
        }
    }
    printf("Number of digit = %d",count);
    return 0;
}