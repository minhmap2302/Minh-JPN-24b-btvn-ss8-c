#include <stdio.h>

int main() {
    int mang[3][3] = {
        {3, 5, 7},
        {2, 9, 1},
        {6, 8, 4}
    };
    int max_value = mang[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mang[i][j] > max_value) {
                max_value = mang[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max_value);

    return 0;
}

