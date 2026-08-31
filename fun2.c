//write a progarm in c language to print any massage and also additon of two number users input

#include<stdio.h>
#include<conio.h>
 
void msg(){
    printf("Elcome Udf Programmming... \n");
}
void add (){
    int a, b, c;
    printf("Enter to any two numbers: \n");
    scanf("%d%d",&a, &b);
    c=a+b;
  printf("the sum %d and %d = %d",a, b,c);
}
int main(){ 
    
    msg();//calling functions
    add(); 
    return 0;
}