#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen n (kich thuoc ma tran vuong): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So n phai lon hon 0. Vui long thu lai.\n");
        return 1; 
    }
    int mang[n][n];
    printf("Nhap cac phan tu cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
    printf("Ma tran vuong %dx%d la:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}

