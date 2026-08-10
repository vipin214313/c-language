//write a program in c to enter the n number but print its reverse numbers
#include<stdio.h>
#include<conio.h>
int main(){
  
    int arr[10];
    int i;
    printf("Enter the 10: \n");
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    printf("reverse numbers list is : \n");
    for(i=9; i>=0;i--){
        printf("%d\t",arr[i]);

    }
    return 0;
}