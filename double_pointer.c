#include <stdio.h>
int main(){
    int a = 10;
    int *p;
    p = &a;     // p = address of a and *p = value stored in the address p which is (a = 10)
    
    printf("Address of a = %p\n", p);
    printf("Address of p = %p\n", &p);
    printf("%d\n", *p);


    int **ptr;
    ptr = &p;   // ptr = address of p 

    printf("Address of a = %p\n", *ptr);
    printf("Address of p = %p\n", ptr);
    printf("%d", **ptr);

    return 0;

}