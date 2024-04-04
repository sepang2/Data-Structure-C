#include <stdio.h>
#include "ArrayList.h"

/*
Q.03-1 [리스트 라이브러리의 활용]
1. 리스트를 생성 및 초기화 한 다음, 정수 1부터 9까지 리스트에 저장한다.
2. 리스트에 저장된 값을 순차적으로 참조하여 그 합을 계산하여 출력한다.
3. 리스트에 저장된 값들 중 2의 배수와 3의 배수에 해당하는 값을 모두 삭제한다.
4. 마지막으로 리스트에 저장된 데이터를 순서대로 출력한다.
*/

int main(void)
{
    // ArrayList의 생성 및 초기화
    List list; // 리스트 생성
    int data;
    int sum;
    ListInit(&list); // 리스트 초기화

    // 1. 정수 1부터 9까지 리스트에 저장한다.
    for (int i = 1; i < 10; i++)
        LInsert(&list, i);

    // 2. 리스트에 저장된 값을 순차적으로 참조하여 그 합을 계산하여 출력한다.
    if (LFirst(&list, &data))
    {
        sum = data;

        while (LNext(&list, &data))
            sum += data;
    }
    printf("SUM: %d \n\n", sum);

    // 3. 리스트에 저장된 값들 중 2의 배수와 3의 배수에 해당하는 값을 모두 삭제한다.
    if (LFirst(&list, &data))
    {
        if (data % 2 == 0 || data % 3 == 0)
            LRemove(&list);

        while (LNext(&list, &data))
        {
            if (data % 2 == 0 || data % 3 == 0)
                LRemove(&list);
        }
    }

    // 4. 마지막으로 리스트에 저장된 데이터를 순서대로 출력한다.
    if (LFirst(&list, &data))
    {
        printf("List: %d ", data);

        while (LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");

    return 0;
}

/*
결과값

SUM: 45

List: 1 5 7
*/