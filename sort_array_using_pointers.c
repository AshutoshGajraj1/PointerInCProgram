#include <stdio.h>
int main(){
    
    int a[10], i, j, temp;
    int *p;
    p = &a[0];

    printf("Enter the elements of array:");
    for(i = 0; i<10; i++){
        scanf("%d", p+i);                       // p+i == &a[i]
    }


    // Sorting
    for(i = 0; i<10; i++){
        for(j = i+1; j<10; j++){
            if(*(p+i)>*(p+j)){
                temp = *(p + i);                // *(p+i) == a[i]
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    

    // Displaying sorted array
    printf("The sorted array is:\n");
    for(i = 0; i<10; i++){
        printf("%d\t", *(p+i));
    }

    return 0;
}