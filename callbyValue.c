//write a program in c to use of call by value using udf find swap of two number...
#include<stdio.h>
#include<conio.h>

void swap(int a, int b);//function declaration

int main(){
    int a, b;
    a=10;
    b=20;
    printf("Before swap of value x = %d and value y = %d",a,b);
    swap(a,b);  //calling a function
    return 0;
}
void swap (int a, int b){  //function defintion
    int x,y,t;
    t=a;
    x=b;
    y=t;
    printf(" \n After the swap of value x = %d and Y = %d", x,y);
}