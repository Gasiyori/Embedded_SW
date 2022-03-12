#include <stdio.h>

int main() {
    int *ptr;
    int num1 = 7;
    int num2 = 13;

    //%p를 통해 16진수로 주소값 확인
    ptr = &num1;
    printf(" %p, %p\n", ptr, &num1);

    ptr = &num2;
    printf(" %p, %p\n", ptr, &num2);

    //value 확인
    printf(" %d\n", (int)sizeof(ptr));
    printf(" %d\n", (int)sizeof(char*));
}