#include <stdio.h>
#include "math_lib.h"

static void add(int a, int b){
    printf("add: %d\n", a+b);
}

static void sub(int a, int b){
    printf("sub: %d\n", a-b);
}

static void mul(int a, int b){
    printf("mul: %d\n", a*b);
}

static void div(int a, int b){
    printf("div: %d\n", a/b);
}

typedef void(*func_t)(int a, int b);

func_t func_lib[4] = {add, sub, mul, div};

void operation(int operation, int a, int b){

    func_lib[operation](a, b);

}









