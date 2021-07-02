#include<stdio.h>

int main(){
    int a[100];
    int n,i,j,t;
    printf("Enter no of elements :");
    scanf("%d",&n);
    for ( i = 0; i < n;i++)
    {
        printf("Enter value of element :");
        scanf("%d",&a[i]);
    }
    printf("\nBefore sort\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }    
    printf("\nAfter sort\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}