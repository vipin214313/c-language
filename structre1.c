//write a program in c to use of structure to print student information
#include<stdio.h>
#include<conio.h>
//create a structure

struct student
{
char name[40];
char barnch[100];
char collage[40];
char city[120];
}s;
void main(){
    printf("Enter the student information details : \n");
    printf("Enter Name : \n");
    gets(s.name);
     printf("Enter branch : \n");
    gets(s.barnch);

     printf("Enter collage : \n");
    gets(s.collage);

     printf("Enter city : \n");
    gets(s.city);

    printf("Above Student all information : \n");
    printf("Student name : %s\n",s.name);
    printf("Student branch : %s\n",s.barnch);
    printf("Student collage : %s\n",s.collage);
    printf("Student city : %s\n",s.city);

}
