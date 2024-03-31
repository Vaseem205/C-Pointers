#include <stdio.h>

typedef struct{
    int a;
    int b;
    int c;
}my_struct;

void main(){

    my_struct x[2];

    x[0].a = 1;
    x[1].a = 10;

    my_struct *ptr = &x[0];

    ptr++;

    printf("ptr->a: %d\n", ptr->a);


}
