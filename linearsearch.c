#include<stdio.h>

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,3,5,56,4,3,23,5,4,546,56,34};
    int size = sizeof(arr)/sizeof(int);
    int element;
    printf("Enter the element to be searched:\n");
    scanf("%d",&element);
    int searchIndex=linearSearch( arr, size,element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}