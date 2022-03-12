#include <stdio.h>
#include <stdlib.h>

int calc_add(int a, int b) {
    return (a+b);
}

int calc_sub(int a, int b) {
    return (a-b);
}

int calc_mul(int a, int b) {
    return (a*b);
}

int calc_div(int a, int b) {
    return (a/b);
}

int main() {
    int calc;
    int (*fp)(int, int) = NULL;
    int num1, num2;

    printf("0: add, 1: sub, 2: mul, 3: div\n");
    scanf("%d", &calc);
    
    printf("ù ��° ���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &num1);
    
    printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &num2);
    
    switch(calc) {
        case 0: fp = calc_add; break;
        case 1: fp = calc_sub; break;
        case 2: fp = calc_mul; break;
        case 3: fp = calc_div; break;
        default: break;
    }

    printf("\n����� = %d\n", fp(num1, num2));
    
    return 0;
}