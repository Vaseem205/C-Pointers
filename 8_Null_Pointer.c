#include<stdio.h>

void main(){

    int *p = NULL;

    // printf("%p, 0x%llu\n", NULL, (long long unsigned int)NULL);

    printf("%d\n", *p); // Segmentation fault (core dumped)
}   