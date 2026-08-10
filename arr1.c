#include <stdio.h>
#include<conio.h>
int main()
{
int arr[10];
int i,elem;
printf("Enter 10 number by using users:\n");
for(i=0; i<10; i++){
scanf("%d",arr[i]);
}
printf("you want to delet  the number  yes, i want to insert plz enter:\n");
scanf("%d", elem);
for(i=0; i<=10; i--){
arr[10]=elem;
printf("%d\t",arr[i]);
}
return 0;
}

					