//write a program in c to print address and value..
//write a program in c to add to number using pointer
#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    int *p; //pointer syntax

    a=12;
    p= &a; //hold of address of a variables
    printf("Address of a= %u \n",p);
    printf("Value of a = %d ", *p);
}