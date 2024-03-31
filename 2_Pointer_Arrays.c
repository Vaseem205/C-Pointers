
/*An array for all practical purpose is a pointer*/

#include <stdio.h>

int main() {
    char *name_ptr = "VASEEM";
    char name_array[] = "vaseem";


    /*1. Similarity bw pointer and an array*/
    // printf("name_ptr: %p, value: %s, first character: %c\n", name_ptr, name_ptr, *name_ptr);              // *(name_ptr + 1)    -> To  get the second letter
    // printf("name_array: %p, value: %s, first character: %c\n", name_array, name_array, *name_array);      // *(name_array + 1)  -> To  get the second letter

    


    /*2. Diff No.1 => Size of array and pointers*/

    // int x[] = {1,2,3,4,5};
    // int *ptr = x;
    
    // printf("sizeof(x_array): %lu, sizeof(x_ptr): %lu\n", sizeof(x), sizeof(ptr));


    /*3. Diff No.2 => Arrays cannot be reassigned but pointers can be*/


    int x[] = {1,2,3,4,5};
    int *ptr = x;

    int a[] = {6,7,8,9,10};
    // a = x;                       //This cannot be done
    ptr = a;

    printf("add: %p\n",&a[0]);
    printf("add: %p\n",ptr);
    printf("first_element: %d\n",*ptr);

}
