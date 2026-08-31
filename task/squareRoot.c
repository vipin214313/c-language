// Square Root
#include<stdio.h>
#include<math.h>
void sqaureRoot(){
    int  n, result;

    printf("enter the number : ");
    scanf("%d",&n);

    result=n*n;
    printf("Square root is = %d",result);
}
int main(){
    sqaureRoot();
    return 0;
}