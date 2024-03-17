#include <stdio.h>
int main(){
    int a[10], i, j, temp;

    printf("Enter the elements of the array:");
    for(i = 0; i<10; i++){
        scanf("%d", &a[i]);
    }

    // sorting 
    for(i =0; i<10; i++){
        for(j = i+1; j<10; j++){
            if (a[i]> a[j]){
                temp = a[i];
                a[i]= a[j];
                a[j]= temp;
            }
        }
    }

    // displaying sorted array
    printf("The sorted array is:\n");
    for (i = 0; i<10; i++){
        printf("%d\t", a[i]);
    }
    

    return 0;
}