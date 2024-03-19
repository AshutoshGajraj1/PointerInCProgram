// Program to find sum of n natural numbers using Dynamic memory allocation, namely malloc() function

#include <stdio.h>
#include <stdlib.h>     // <stdlib.h> header file is needed to use malloc() function
int main(){

    int n, sum = 0; 
    int *ptr;

    printf("Enter the number of data: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));    

    // if memory cannot be allocated
    if(ptr == NULL){
        printf("Error! memory not allocated");
        exit(0);
    }


    printf("Enter the numbers: ");
    for(int i =0; i<n; i++){
        scanf("%d", (ptr+i));
    }


    printf("The sum is:");
    for(int i = 0; i<n; i++){
        sum = sum + *(ptr+i);
    }
    
    printf("%d", sum);

    free(ptr);
    return 0;
}