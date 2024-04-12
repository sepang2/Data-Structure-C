#include "Point.h"

#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1  // '참'을 표현하기 위한 매크로 정의
#define FALSE 0 // '거짓'을 표현하기 위한 매크로 정의

#define LIST_LEN 100
typedef int *LData; // typedef 선언

typedef struct __ArrayList // 배열기반 리스트를 정의한 구조체
{
    LData arr[LIST_LEN]; // 리스트의 저장소인 배열
    int numOfData;       // 저장된 데이터의 수
    int curPosition;     // 데이터 참조위치를 기록
} ArrayList;

typedef ArrayList List;

void ListInit(List *plist);            // 초기화
void LInsert(List *plist, LData data); // 데이터 저장

int LFirst(List *plist, LData *pdata); // 첫 데이터 참조
int LNext(List *plist, LData *pdata);  // 두 번째 이후 데이터 참조

LData LRemove(List *plist); // 참조한 데이터 삭제
int LCount(List *plist);    // 저장된 데이터의 수 반환

#endif

/*
<typedef로 선언함으로써 추후 간편하게 다른 자료형으로 바꿀 수 있음>
= ⭐️main 함수를 변경하지 않고도 main 함수 내에서 사용하는 변수들을 다른 것으로 대체할 수 있음⭐️
Line 8 -> ex) typedef int *LData; // 이 한줄로 구조체 변수의 주소값 리스트로 바꿀 수 있음
Line 21 -> ex) typedef LinkedList List; // 사용할 리스트 종류 쉽게 바꿀 수 있음
*/