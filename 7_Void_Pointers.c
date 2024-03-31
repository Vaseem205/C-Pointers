#include <stdio.h>

int main(){

    int i = 10;
    void *ptr = &i;

    printf("ptr: %p, &i: %p\n", ptr, &i);

    //printf("*ptr: %d\n", *ptr);
    /*
    This will return an error, as you cant dereference void ptr.
    Cuz, compiler does not understand how many bytes to go and read
    */

}