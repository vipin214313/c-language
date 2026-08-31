//write a program in c to use of UDF add two number by using no return type but passing parameter...
#include<stdio.h>
#include<conio.h>
void add2(int a, int b){
    int c; 
    c=a+b;
    printf("add = % d " ,c);
}
int main(){
    add2(12,300);
    return 0;
}