	//write a program in c language to find simple intrest by using all types of UDF

    #include<stdio.h>
    #include<conio.h>

    void si1(){
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
void si2(int pri, int rate, int time, int si){
   
    printf ("Enter the principle amount :  \n");
    scanf("%d",&pri);

    printf ("Enter the rate of Interst  :  \n");
    scanf("%d",&rate);

    printf ("Enter time to taken :  \n");
    scanf("%d",&time);

    si=(pri+rate+time)/100;

    printf("The Simple interst is  %d : \n",si);

} 
void si()3{
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
int main(){
    si1();
    si2();
}