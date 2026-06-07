#include <stdio.h>

int main() {
    int n, a[100], x;
    int timThay = 0;

    printf("Nhap n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap x = ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            timThay = 1;
            break;
        }
    }

    if(timThay)
        printf("%d co trong mang.", x);
    else
        printf("%d khong co trong mang.", x);

    return 0;
}
