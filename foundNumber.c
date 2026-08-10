//write a program  in c using array to find the number in list or not means given list search enter number fond or not 
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[6];
    int i, num , find=0;
    printf("Enter the 6 numbers by using users:\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("please enter search numbers \n");
   scanf("%d",&num);
   for ( i = 0; i < 6; i++)
   {
    if(a[i]==num)
    {
        find=1;
        break;
    }
    if(find ==1)
    {
        printf("this number is find in list");
    }
    else
    {
        printf("Number not found");
    }
    return 0;
} 