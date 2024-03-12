#include<stdio.h>

int main() {
    int n, arr[10], i, sum=0, avg;
    
    printf("Enter array size: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Numbers greater than average:\n");
    for(i=0; i<n; i++) {
        if(arr[i] > avg) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
