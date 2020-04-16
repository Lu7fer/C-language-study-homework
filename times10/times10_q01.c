
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* viriable define and assignment*/
    int i = 10;
    char c = 'a';
    float f = 3.14;
    int arr[] = {1, 2, 3};
    int *ptr=&i;
    /* pointer assignment*/
    int *ptr_i = &i;
    char *ptr_c = &c;
    float *ptr_f = &f;
    int *ptr_arr = arr;
    int **ptr_ptr = &ptr;
    /* access*/
    printf("int:\ndirectly access:%d\n", i);
    printf("pointer access:%d\n", *ptr_i);
    printf("char:\ndirectly access:%c\n", c);
    printf("pointer access:%c\n", *ptr_c);
    printf("float:\ndirectly access:%f\n", f);
    printf("pointer access:%f\n", *ptr_f);
    printf("int array:\ndirectly access:%d\n", arr[1]);
    printf("pointer access:%d\n", *(ptr_arr + 1));
    printf("double pointer:\ndirectly access:%d\n", i);
    printf("pointer access:%dor%d\n", **ptr_ptr,*ptr);
    printf("%d,%d,%d",arr,&(arr[0]),ptr);
    return 0;
}
