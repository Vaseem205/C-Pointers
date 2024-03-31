#include <stdio.h>

void f1(){
    printf("f1\n");
}

void f2(){
    printf("f2\n");
}

void main(){

    void (*fp)();

    fp = f1;
    fp();

    fp = f2;
    fp();

}