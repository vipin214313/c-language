//write a program in c to use of UDF add two number by using  return type but no passing parameter...

#include<stdio.h>
#include<conio.h>
void add3()
{
    int a, b, c;
    a=8;
    b=65;
    c=a+b;
return c;
}
int main()
{
    int r;
    r=add3();
    printf("add = %d ",r);
    return 0;
}