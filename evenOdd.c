//write in c program check prime number or not

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("Even number");
    }
    else{
        printf("Odd numbers");
    }

}