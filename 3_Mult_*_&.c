/*

NOTE: If * and & exist together then they both cancel out

*/


#include <stdio.h>

int main(){

    int i = 10;

    printf("i:%d, &i:%p, *&i=%d, *&*&i=%d, *&*&*&i=%d\n", i, &i, *&i, *&*&i, *&*&*&i);

    *&*&*&i=20;

    printf("i:%d, &i:%p, *&i=%d, *&*&i=%d, *&*&*&i=%p\n", i, &i, *&i, *&*&i, *&*&*&i);

    

}