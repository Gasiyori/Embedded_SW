#include <stdio.h>

int main() {
    int *ptr;
    int num1 = 7;

    ptr = &num1;
    printf("%p, %p\n", ptr, &num1);
    printf("%d, %d\n", *ptr, num1);

    *ptr = 23; //num1에 대한 역참조
    printf("%p, %p\n", ptr, &num1);
    printf("%d, %d\n", *ptr, num1);

    return 0;
}