#include <stdio.h>

// num개의 원반을 by를 거쳐 from에서 to로 이동하는 함수
void HanoiTowerMove(int num, char from, char by, char to)
{
    if (num == 1)
        printf("move disk1 from %c to %c \n", from, to);
    else
    {
        HanoiTowerMove(num - 1, from, to, by);
        printf("move disk%d from %c to %c \n", num, from, to);
        HanoiTowerMove(num - 1, by, from, to);
    }
}

int main(void)
{
    HanoiTowerMove(3, 'A', 'B', 'C');

    return 0;
}