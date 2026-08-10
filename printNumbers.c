//print numbers from 1 to 20 and display wheather each number is even or odd.
#include<stdio.h>
int main(){
    int n; 
    for (n= 1; n<=20;n++ ){
        if (n%2 ==0){
            printf("%d -even\n",n);
        }else{
            printf("%d - odd\n",n);
        }
    }
}