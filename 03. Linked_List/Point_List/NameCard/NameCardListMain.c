#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

/*
Q.03-2 [리스트의 활용]
1. 총 3명의 전화번호 정보를, 앞서 우리가 구현한 리스트에 저장한다.
2. 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 정보를 출력한다.
3. 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 전화번호 정보를 변경한다.
4. 특정 이름을 대상으로 탐색을 진행하여, 그 사람의 정보를 삭제한다.
5. 끝으로 남아있는 모든 사람의 전화번호 정보를 출력한다.
6. ArrayList.h, ArrayList.c와 함께 컴파일하여 실행할 것.

저장의 형태는 NameCard 구조체 변수의 주소값이어야 하며,
특정 이름은 임의로 정하되 서로 다른 이름이어야 한다.
*/

int main(void)
{
    List list;
    NameCard *pcard;
    ListInit(&list);

    pcard = MakeNameCard("Alice", "010-1111-2222");
    LInsert(&list, pcard);

    pcard = MakeNameCard("Bob", "010-3333-4444");
    LInsert(&list, pcard);

    pcard = MakeNameCard("Charlie", "010-5555-6666");
    LInsert(&list, pcard);

    // Bob의 정보를 조회하여 출력
    if (LFirst(&list, &pcard))
    {
        if (!NameCompare(pcard, "Bob"))
            ShowNameCardInfo(pcard);
        else
        {
            while (LNext(&list, &pcard))
            {
                if (!NameCompare(pcard, "Bob"))
                {
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }
    }

    // Alice의 정보를 조회하여 전화번호 변경
    if (LFirst(&list, &pcard))
    {
        if (!NameCompare(pcard, "Alice"))
            ChangePhoneNum(pcard, "010-1234-5678");
        else
        {
            while (LNext(&list, &pcard))
            {
                if (!NameCompare(pcard, "Alice"))
                {
                    ChangePhoneNum(pcard, "010-1234-5678");
                    break;
                }
            }
        }
    }

    // Charlie의 정보를 조회하여 삭제
    if (LFirst(&list, &pcard))
    {
        if (!NameCompare(pcard, "Charlie"))
        {
            pcard = LRemove(&list);
            free(pcard);
        }
        else
        {
            while (LNext(&list, &pcard))
            {
                if (!NameCompare(pcard, "Charlie"))
                {
                    pcard = LRemove(&list);
                    free(pcard);
                    break;
                }
            }
        }
    }

    // 모든 사람의 정보 출력
    printf("num of data: %d \n", LCount(&list));

    if (LFirst(&list, &pcard))
    {
        ShowNameCardInfo(pcard);

        while (LNext(&list, &pcard))
            ShowNameCardInfo(pcard);
    }

    return 0;
}

/*
결과값

[Name]: Bob
[Phone]: 010-3333-4444

num of data: 2
[Name]: Alice
[Phone]: 010-1234-5678

[Name]: Bob
[Phone]: 010-3333-4444
*/