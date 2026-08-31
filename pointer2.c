//write a program in c to add to number using pointer...
#include<stdio.h>
#include<conio.h>
void main(){
    int a, b,c;
    int *p;
    a=20; b=30;
    c=a+b;
    p=&c;//hold the address ..

    printf("Add = %d",*p);
    printf(" \n Address of ponter = %d",p);
}