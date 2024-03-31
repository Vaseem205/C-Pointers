#include <stdio.h>

int main(){
    // int x = 10;
    // int *ptr = &x;

    // printf("c= %d\n", x);
    // printf("&c= %p\n", &x);
    // printf("ptr= %p\n", ptr);  
    // printf("&ptr= %p\n", &ptr);
    // printf("*ptr= %d\n", *ptr);

    int x = 2;

    int y = 3;

    int *ptr = &x;

    // int z = y & (int)(&x);

    int z = y * (*ptr);

    // printf("x: %p\n", &x);

    printf("z: %d\n", z);

    return 0;

}