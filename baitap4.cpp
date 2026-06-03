#include <stdio.h>

int main()
{
    int a, b, i;
    int ucln, bcnn;

    printf("Nhap a = ");
    scanf("%d", &a);

    printf("Nhap b = ");
    scanf("%d", &b);

    // Tìm UCLN
    for(i = (a < b ? a : b); i >= 1; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            ucln = i;
            break;
        }
    }

    // Tìm BCNN
    bcnn = (a * b) / ucln;

    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);

    return 0;
}
