#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100];
    int n,i,j,t;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter value of element: ");
        scanf("%d",&a[i]);
    }
    printf("\nBefore sort\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nAfter sort\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}