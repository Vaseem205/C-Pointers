#include <stdio.h>

typedef struct{
    long long int a;
    float b;
    int c;
}my_struct;


void main(){
    my_struct var = {
        .a = 1024,
        .b = 2.5,
        .c = -1
    };

    my_struct *ptr = &var;

    (*ptr).a = (*ptr).a+1;
    (*ptr).b = (*ptr).b+1;
    (*ptr).c = (*ptr).c+2;

    printf("var.a: %lld, var.b: %f, var.c: %d\n", var.a, var.b, var.c);
    printf("(*ptr).a: %lld, (*ptr).b: %f, (*ptr).c: %d\n", (*ptr).a, (*ptr).b, (*ptr).c);

    ptr->a = ptr->a+1;
    ptr->b = ptr->b+1;
    ptr->c = ptr->c+1;

    printf("var.a: %lld, var.b: %f, var.c: %d\n", var.a, var.b, var.c);
    printf("(*ptr).a: %lld, (*ptr).b: %f, (*ptr).c: %d\n", (*ptr).a, (*ptr).b, (*ptr).c);
    printf("ptr->a: %lld, ptr->b: %f, ptr->c: %d\n", ptr->a, ptr->b, ptr->c);

}