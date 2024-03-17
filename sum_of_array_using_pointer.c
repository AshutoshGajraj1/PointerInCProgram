#include <stdio.h>

int sum(int a[5]);

int main(){
    // sum of elements of array

    int a[5];
    
    printf("Enter the array elements: ");    
    for(int i = 0; i<5; i++){
        scanf("%d", &a[i]);
    }
    
    sum(a[5]);

    printf("Sum = %d", sum);

    return 0;
}

int sum(int a[5]){
    
    int sum = 0;

    for(int i = 0; i<5; i++){
        sum += a[i];
    }


}
