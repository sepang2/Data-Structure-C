#include <stdio.h>

int BSearch(int arr[], int len, int target)
{
    int first = 0;      // 탐색 대상의 시작 인덱스 값
    int last = len - 1; // 탐색 대상의 마지막 인덱스 값
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2; // 탐색 대상의 중앙을 찾는다

        if (target == arr[mid]) // 중앙에 저장된 값이 타겟과 같다면
            return mid;         // 탐색 완료
        else
        {
            if (target < arr[mid])
                last = mid - 1; // arr[mid] 중복검사 방지 및 -1, +1 해줘야 while문 탈출 가능
            else
                first = mid + 1;
        }
    }
    return -1; // 찾지 못하면 -1
}

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
    if (idx == -1)
        printf("search fail \n");
    else
        printf("index of target: %d \n", idx);

    idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
    if (idx == -1)
        printf("search fail \n");
    else
        printf("index of target: %d \n", idx);

    return 0;
}