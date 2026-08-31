////write a program in c to use of structure and union size structure vs union
#include<stdio.h>
#include<conio.h>
//create structure
struct  student
{
    char name[20];
    char branch[200];
    char city[300];


}s;
//craere union
union  record
{
    char name[20];
    char branch[200];
    char city[300];
}u;

void main(){
    //if u want to size of any variables then we use sizeof
    printf("the size of structure is : %d\n",sizeof(s));
    printf("the size is union is : %d\n",sizeof(u));
}

