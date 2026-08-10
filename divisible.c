//write in c program 10 and 100 that are divisible by 5
#include<stdio.h>
int main(){
    int n;
    for ( n = 10; n <= 100; n++){
        if( n % 5 == 0){
            printf("%d",n);
        }
    }
    return 0;
}
