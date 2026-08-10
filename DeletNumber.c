//write a program in c language to input 10 numbres and display and  u want to delet any numbers then print all number
#include<stdio.h>
#include<conio.h>
int main(){

    int arr[10];
    int i , elem;
    printf("Enter the 10  number by user input  : \n ");
    
    for(i=0;i<=10; i++){
        scanf("%d",&arr[i]);
    }
    printf("You want to delet any number , please enter the number : \n");
    scanf("%d",&elem);
    for(i=0; i<10; i ++){
        if(elem==arr[i]);
        continue;
        printf("%d\t",arr[i]);

    }
    return 0;

}