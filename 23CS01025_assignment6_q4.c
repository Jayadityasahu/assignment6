#include<stdio.h>


int main(){

    int arr1[10], arr2[10], i, j, n1, n2;
    printf("Enter size of arr1:");
    scanf("%d", &n1);
    printf("Enter size of arr2:");
    scanf("%d", &n2);
    printf("Enter elements of arr1:");
    for(i=0; i<10; i++)
    scanf("%d", &arr1[i]);
    printf("Enter array elements of arr2:");
    for(i=0; i<10; i++)
    scanf("%d", &arr2[i]);
for(i=0;i<n1; i++){
    for(j=0; j<n2; j++){
        if(arr2[j]==arr1[i]);
    }
}printf("arr2 is a subset of arr1");

return 0;
}