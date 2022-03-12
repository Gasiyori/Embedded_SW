#include <stdio.h>
#include <stdlib.h>

//요소의 데이터 형식이 같은 구조체 2개 생성
struct Pos { int x, y; };
struct Size { int width, height; };

int main() {
    struct Pos* pt = (struct Pos*)malloc(sizeof(struct Pos));
    struct Size* ps = (struct Size*)pt; //Size를 지정해주지 않고 pt를 통해 값을 넣음. 같은 형식의 요소를 갖고 있기 때문에 가능
    
    pt->x = 320;
    pt->y = 240;
    
    printf("pt->x = % d, pt->y = % d\n", pt->x, pt->y);
    printf("ps->width = % d, ps->height = % d\n", ps->width, ps->height);
   
    free(pt);

    return 0;
}