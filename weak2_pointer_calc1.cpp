#include <stdio.h>

int main() {
    int arr[5] = { 100, 200, 300, 400, 500 };
    int* ptr1, * ptr2, * ptr3;

    ptr1 = arr;
    ptr2 = ptr1 + 2;
    ptr3 = ptr1 + 4;

    printf("ptr1 : value = % d, addr = % p\n", *ptr1, ptr1); //100 출력
    printf("ptr2 : value = % d, addr = % p\n", *ptr2, ptr2); //300 출력
    printf("ptr3 : value = % d, addr = % p\n", *ptr3, ptr3); //500 출력

    ptr1++;
    ptr3--;

    printf("ptr1 : value = % d, addr = % p\n", *ptr1, ptr1); //200 출력
    printf("ptr3 : value = % d, addr = % p\n", *ptr3, ptr3); //400 출력

    return 0;
}