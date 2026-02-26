/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomArray(int arr[], int n, int min, int max) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

// 2. Hàm in mảng
void printArray(int arr[], int n) {
    printf("Mảng vừa tạo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int tong = 0;
    int dem = 0;

    printf("Nhập số lượng phần tử n: ");
    scanf("%d", &n);

    int arr[n];
    srand(time(NULL));
    randomArray(arr, n, 1, 100);
    printArray(arr, n);

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) { 
            tong += arr[i];    
            dem++;             
        }
    }

    if (dem > 0) {
        float trungBinh = (float)tong / dem; 
        printf("\n=> Có %d số chia hết cho 3.", dem);
        printf("\n=> Các số chia hết cho 3 trong mảng là: " \n");
        for (int i = 0; i < n; i++) {
            if (arr[i] % 3 == 0) {
                printf("%d ", arr[i]);
            }
        }
        printf("\n=> Trung bình tổng của chúng là: %.2f\n", trungBinh);
    } else {
        printf("\nTrong mảng không có số nào chia hết cho 3.\n");
    }

    return 0;
}