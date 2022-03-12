#include <stdio.h>

int main() {
    int arr[5] = {0x12, 0x34, 0x56, 0x78, 0x90};
    int *ptr = arr;

    //포인터가 가리키는 값, arr변수가 가리키는 값, arr의 배열의 첫번째 요소
    printf("0x %x, 0x %x, 0x %x\n", *ptr, *arr, arr[0]);

    //배열의 크기는 20, 포인터 변수의 크기는 4
    printf("%d, %d\n", (int)sizeof(arr), (int)sizeof(ptr));

    return 0;
}