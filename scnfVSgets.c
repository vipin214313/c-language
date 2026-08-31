//wap in c diffrence scanf and gets functions...scanf vs gets..

#include<stdio.h>
#include<conio.h>
void main(){
    char name[23];
    printf("Enter u name : \n");
    // scanf("%s",name);
    gets(name);
    printf("Your name is =%s",name);
}