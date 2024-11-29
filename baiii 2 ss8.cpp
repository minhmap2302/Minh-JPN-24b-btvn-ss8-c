#include <stdio.h>

int main() {
    int mang[] = {3, 7, 12, 19, 21, 35};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 
    int phanTu, viTri = -1;
    printf("Nhap mot phan tu can kiem tra: ");
    scanf("%d", &phanTu);
    for (int i = 0; i < kichThuoc; i++) {
        if (mang[i] == phanTu) {
            viTri = i; 
            break;
        }
    }
    if (viTri != -1) {
        printf("Vi tri phan tu trong mang la: %d\n", viTri);
    } else {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

