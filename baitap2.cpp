#include <stdio.h>
#include <math.h>

int main() {
    double tienGoc = 5000;
    double laiSuat = 0.08;
    int soNam = 3;

    double tongTien;

    tongTien = tienGoc * pow((1 + laiSuat), soNam);

    printf("Tong so tien sau %d nam la: %.2lf USD\n", soNam, tongTien);

    return 0;
}
