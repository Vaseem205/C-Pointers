#include <stdio.h>

void f1(int a){
    printf("f1 a: %d\n", a);
}

void f2(int b){
    printf("f2 b: %d\n", b);
}

typedef void (*func_ptr)(int);

void main(){

    func_ptr f1p;

    //func_ptr f1p = f1;

    f1p = f1;
    f1p(1);

    func_ptr f2p;
    f2p = f2;
    f2p(2);

}