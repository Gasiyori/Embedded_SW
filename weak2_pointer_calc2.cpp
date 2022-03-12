#include <stdio.h>

int main() {
    int arr[5] = { 100, 200, 300, 400, 500 };
    int* ptr;
    ptr = arr;
   
    printf("*(ptr + 1) = %d\n", *(ptr + 1));
    printf("*(ptr + 3) = %d\n", *(ptr + 3));
    printf("*(++ptr) = %d\n", *(++ptr)); //전치
    printf("*(ptr++) = %d\n", *(ptr++)); //후위

    return 0;
}