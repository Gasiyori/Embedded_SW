#include <stdio.h>
#include <stdlib.h>

//포인터를 배열처럼 사용

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 10);
    int arr[10];

    ptr[0] = 0x5A;
    arr[0] = 0xA5;

    printf("0x %x, 0x %x\n", ptr[0], arr[0]);

    free(ptr);

    return 0;
}