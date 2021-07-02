#include<stdio.h>
void wrong_swap(int a,int b);
void swap(int* a,int* b);
int main(){
    int x=8,y=9;
    printf("The value of x & y before swap is %d and %d.\n",x,y);
    swap(&x,&y);
    printf("The value of x & y after swap is %d and %d.\n",x,y);
    return 0;
}
void wrong_swap(int a,int b)//not working due to call by value
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}