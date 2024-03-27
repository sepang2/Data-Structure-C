#include <stdio.h>

int Fibo(int n)
{
    // printf("func call param %d \n", n); // Fibo 함수 호출순서 확인

    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return Fibo(n - 2) + Fibo(n - 1);
}

int main(void)
{
    // Fibo(7); // Fibo 함수 호출순서 확인

    for (int i = 1; i < 15; i++)
        printf("%d ", Fibo(i));

    return 0;
}