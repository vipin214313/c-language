//write a program in c language simple intrest ,square of area, area of circle ,parameaters of rectangles
#include<stdio.h>
#include<conio.h>
void si(){
    int pri,rate, time, si;
    printf ("Enter the principle amount :  \n");
    scanf("%d",&pri);

    printf ("Enter the rate of Interst  :  \n");
    scanf("%d",&rate);

    printf ("Enter time to taken :  \n");
    scanf("%d",&time);

    si=(pri+rate+time)/100;

    printf("The Simple interst is  %d : \n",si);

} 
void squareArea(){
    int lenght, b, area;
    printf ("Enter the a values")
 

}
void circle(){
    int r,area;
    printf("Enter the radious : \n");
    scanf("%d",&r);
    area=3.14 * r * r;

    printf("The are of cirscel is : %d ",area);

}
void parameatreREc(){

}

int main(){
    si();
    squareArea();
    circle();
    parameatreREc();
    return 0;
}