#include <stdio.h>
int main(){
    int a[5];

    for(int i = 0; i< 5; ++i){
        printf("Enter a number: ");
        scanf("%d", a+i);
    }
     
    printf("The array is :\n");
    for(int i = 0; i<5; ++i){
        printf("%d\t", a[i]);
    }
    return 0;
}

