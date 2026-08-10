//write a program in c to print even or odd number count list
#include<stdio.h>
#include<conio.h>
int main(){
    int a[5], e=0, o=0;
    int i;
    printf("Enter the number : ");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf(" \n Check even number and odd numbers  ");
    for(i=0;i<5; i++){
        scanf("%d", &a[i]);
    }
    printf(" \n Check even and odd total number");
    for(i=0;i<5; i++){
        if(a[i]%2==0){
            e++;
        }else{
            o++;
        }
     printf("even total number= %d\n",e);
        printf("odd total number =%d",o);
       
     }
      return 0;
}