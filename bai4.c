/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

#include <stdio.h>

int main() {
    int n, m;

    printf("Nhập số hàng (n): "); scanf("%d", &n);
    printf("Nhập số cột (m): "); scanf("%d", &m);

    int a[n][m];

    printf("\n--- Nhập phần tử ma trận ---\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhập a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n--- Ma trận bình phương là ---\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int binhPhuong = a[i][j] * a[i][j];
            printf("%d\t", binhPhuong);
        }
        printf("\n");
    }

    return 0;
}