#include <stdio.h>

int BSearchRecur(int arr[], int first, int last, int target)
{
    int mid = (first + last) / 2; // 탐색대상의 중앙

    if (first > last)
        return -1; // -1 반환은 탐색 실패 의미

    if (arr[mid] == target)
        return mid; // 탐색대상의 인덱스 값 반환
    else if (target < mid)
        return BSearchRecur(arr, first, mid - 1, target);
    else
        return BSearchRecur(arr, mid + 1, last, target);
}

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
    if (idx == -1)
        printf("search fail\n");
    else
        printf("index of target: %d \n", idx);

    idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 4);
    if (idx == -1)
        printf("search fail\n");
    else
        printf("index of target: %d \n", idx);

    return 0;
}