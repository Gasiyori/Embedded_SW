#include <stdio.h>
#include <string.h>

//구조체와 구조체 포인터 반환
//구조체로 묶어서 여러개의 값을 반환

struct Pos {
    int x;
    int y;
    char str[100];
};

struct Pos setPos(int x_pos, int y_pos, const char* pstr) {
    struct Pos p;
    p.x = x_pos;
    p.y = y_pos;
    strcpy(p.str, pstr);
    return p;
}

int main() {
    struct Pos p1;
    
    p1 = setPos(100, 200, "냉장고");
    printf("x = %d, y = %d, %s\n", p1.x, p1.y, p1.str);

    p1 = setPos(200, 300, "에어컨");
    printf("x = %d, y = %d, %s\n", p1.x, p1.y, p1.str);
    
    return 0;
}