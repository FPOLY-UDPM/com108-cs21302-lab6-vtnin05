/******************************************************************************
 * Họ và tên: [Võ Tuyết Như]
 * MSSV:      [PS48854]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Hàm tạo mảng ngẫu nhiên
void randomArray(int arr[], int n, int min, int max) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

// Hàm in mảng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 1. Hàm hoán vị (Dùng con trỏ để đổi chỗ thật)
void hoanVi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 2. Hàm sắp xếp giảm dần
void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Nếu phần tử đứng sau mà LỚN HƠN phần tử đứng trước
            if (arr[j] > arr[i]) {
                // Đổi chỗ để đưa số lớn lên phía trước
                hoanVi(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    int n;
    srand(time(NULL));

    printf("Nhập số lượng phần tử n: ");
    scanf("%d", &n);

    int arr[n];
    randomArray(arr, n, 1, 100);

    printf("Mảng ban đầu: ");
    printArray(arr, n);

    // Gọi hàm sắp xếp
    sapXepGiamDan(arr, n);

    printf("Mảng sau khi sắp xếp giảm dần: ");
    printArray(arr, n);

    return 0;
}