#include <stdio.h>

int BSearch(int arr[], int len, int target)
{
    int first = 0;
    int last = len - 1;
    int mid;
    int opCount = 0; // 비교연산 횟수 기록

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (target == arr[mid])
            return mid;
        else
        {
            if (target < arr[mid])
                last = mid - 1;
            else
                first = mid + 1;
        }
        opCount += 1;
    }
    printf("Operating count: %d \n", opCount); // 탐색 실패 시 연산횟수 출력
    return -1;
}

int main(void)
{
    int arr1[500] = {
        // 모든 요소 0으로 초기화
        0,
    };
    int arr2[5000] = {
        0,
    };
    int arr3[50000] = {
        0,
    };
    int idx;

    // 각 배열에서 저장되지 않은 값 찾기
    idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
    if (idx == -1)
        printf("search fail \n\n");
    else
        printf("index of target: %d \n", idx);

    idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 1);
    if (idx == -1)
        printf("search fail \n\n");
    else
        printf("index of target: %d \n", idx);

    idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 1);
    if (idx == -1)
        printf("search fail \n\n");
    else
        printf("index of target: %d \n", idx);

    return 0;
}

/*
                        <Operaing Count>
 n          LinearSearch(O(n))     BinarySearch(O(logn))
500     =>        500                     9
5,000   =>        5,000                   13
50,000  =>        50,000                  16
*/