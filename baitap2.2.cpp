#include <stdio.h>

int main() {
    int n, a[100];
    int tong = 0, dem = 0;

    printf("Nhap n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i += 2) {
        if(a[i] % 2 != 0) {
            tong += a[i];
            dem++;
        }
    }

    if(dem > 0)
        printf("Trung binh cong cac so le o vi tri chan = %.2f",
               (float)tong / dem);
    else
        printf("Khong co so le o vi tri chan!");

    return 0;
}
