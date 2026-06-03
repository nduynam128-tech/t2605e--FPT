#include <stdio.h>

int main()
{
    int n, tong = 0;

    printf("Nhap n = ");
    scanf("%d", &n);

    while (n > 0)
    {
        tong = tong + n % 10;
        n = n / 10;
    }

    printf("Tong cac chu so = %d", tong);

    return 0;
}
