//write a program in c to use of UDF add two number by using  return type and passing parameter...
#include<stdio.h>
#include<conio.h>

int add4(int a, int b){
    int c;
    c=a+b;
    return c;

}
void main(){
    int result;
    result = add4(78,22);
    printf("addition =%d",result);
    
}
