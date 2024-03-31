#include <stdio.h>

void f1(int a){
    printf("f1 a: %d\n", a);
}

void f2(int b){
    printf("f2 b: %d\n", b);
}

void main(){

    void (*fp)(int);

    fp = f1;
    fp(1);

    fp = f2;
    fp(2);

}