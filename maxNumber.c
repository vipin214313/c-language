//write a program in c language to use of array input 5 number and check max number .
#include<stdio.h>
#include<conio.h>
int main(){
    int arr[5],max,i;
    printf("Enter the 5 number :\n ");
    for(i=0; i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("max number list: \n");
    max=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    
    }
    printf("The largest number is = %d",max);
    return 0;
    
}